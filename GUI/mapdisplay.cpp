#include "mapdisplay.h"
#include "map.h"
#include "rectangle.h"
#include <QPainter>
#include <vector>
#include <QBrush>
//#include <QColor>
#include <iostream>
#include <QLine>
#include <QEnterEvent>
#include <QEvent>
#include <QDragMoveEvent>
#include <QMouseEvent>
#include <cmath>
#define tiles map->tiles


MapDisplay::MapDisplay(QWidget* parent)
    :QOpenGLWidget(parent)
{
    setMouseTracking(true);

}

QPointF MapDisplay::mapToCanvas(Point* p){
    int x,y;

    double scale = canvasWidth/viewBox.width();
    x = (int) (((p->x - focus().x) * scale) + .5*canvasWidth);
    y = (int) (((p->y - focus().y) * scale) + .5*canvasHeight);

    return QPoint(x, canvasHeight - y);
}
QPointF MapDisplay::mapToCanvas(Point p){
    return mapToCanvas(&p);
}

double MapDisplay::canvasToMap(double d){//based on width
    double scaleFactor = viewBox.width() / canvasWidth;
    return d * scaleFactor;
}

Point MapDisplay::canvasToMap(QPointF* p){
    double xOffset = canvasToMap(p->x() - canvasWidth/2);
    double yOffset = canvasToMap(canvasHeight/2 - p->y());

    Point out = focus();
    out.x += xOffset;
    out.y += yOffset;

    return out;
}
Point MapDisplay::canvasToMap(QPointF p){
    return canvasToMap(&p);
}

void MapDisplay::updateMapCache(){//verify it's actually clipping (I don't think it is)
    onScreenFragments.clear();
    for(Tile* f: tiles){
        for(Point* p: f->getVerticies())
            if(viewBox.contains(p)){
                onScreenFragments.push_back(f);
                goto nextFragment;
            }

        for(Edge* e: f->getEdges())
            if(viewBox.intersects(*e)){
                onScreenFragments.push_back(f);
                goto nextFragment;
            }

        nextFragment:;
    }
}

void MapDisplay::initializeGL(){

}

void MapDisplay::resizeGL(int w, int h){
    canvasWidth = w;
    canvasHeight = h;
    updateMapCache();

}

void MapDisplay::paintTile(Tile* t, QPainter* p){
    if(t->land){
        switch(t->type){
        case Tile::grass:
            p->setPen(Qt::green);
            p->setBrush(Qt::green);
            break;
        case Tile::mountain:
            p->setPen(Qt::gray);
            p->setBrush(Qt::gray);
            break;
        case Tile::forest:
            p->setPen(Qt::darkGreen);
            p->setBrush(Qt::darkGreen);
            break;
        }
    } else{
        p->setPen(Qt::blue);
        p->setBrush(Qt::blue);
    }

    for(Point* p: t->getVerticies()){
        qpts.push_back(mapToCanvas(p));
    }
    if(qpts.size() == 0) return;
    p->drawPolygon(&qpts.at(0), qpts.size(), Qt::FillRule::OddEvenFill);
    qpts.clear();
}

void MapDisplay::paintGL(){
    QPainter p(this);

    //paint tiles
    for(Tile* t: onScreenFragments) paintTile(t, &p);

    //highlight tile under cursor
    if(highlighted != nullptr){

        p.setBrush(QBrush(QColor(1,1,1,55)));
        p.setPen(Qt::white);
        for(Point* p: highlighted->getVerticies()){
            qpts.push_back(mapToCanvas(p));
        }
        if(qpts.size() == 0) goto brokenFragment;
        p.drawPolygon(&qpts.at(0), qpts.size(), Qt::FillRule::OddEvenFill);
        qpts.clear();
        brokenFragment:;
    }


}

void MapDisplay::setMap(Map* m){
    map = m;
}

void MapDisplay::setFocus(){
    viewBox.moveCenterTo(map->getBounds().getCenter());
}

void MapDisplay::setFocus(Point p){
    viewBox.moveCenterTo(p);
}

void MapDisplay::setViewBox(Rectangle r){

    viewBox = r;
}
Point MapDisplay::focus(){
    return viewBox.getCenter();
}

void MapDisplay::enterEvent(QEnterEvent *event){
//std::cout << "Entered" << std::endl;
}

void MapDisplay::leaveEvent(QEvent *event){
    highlighted = nullptr;

}


void MapDisplay::mousePressEvent(QMouseEvent *event){
    lastPress = event->pos();
    canvasToMap(event->position());
    //std::cout << "Mouse Pressed" << std::endl;
    event->accept();
}

void MapDisplay::mouseMoveEvent(QMouseEvent *event){
    if(event->buttons() == Qt::LeftButton){
        double xChange = canvasToMap(lastPress.x() - event->position().x());
        double yChange = event->position().y() - lastPress.y();
        yChange  = canvasToMap(yChange);

        setFocus(Point(focus().x + xChange, focus().y + yChange));//pick up here
        lastPress = event->position();
        updateMapCache();

    }else{//mouse isn't being dragged
        highlighted = nullptr;
        for(Tile* f: tiles){

            if(f->contains(canvasToMap(event->position()))){
                highlighted = f;
                break;
            }
        }

        //Pick up here:
        //And fragment finding by region,
        //and finding tiles by point (for finding highlighted tile)
        //just leave map as a data structure...


    }


this->update();
event->accept();
}

void MapDisplay::wheelEvent(QWheelEvent *event){
    if(event->angleDelta().y() < 0)
        viewBox.scale(std::pow(1.001, -event->angleDelta().y()), canvasToMap(event->position()));
    else
        viewBox.scale(std::pow(.999,  event->angleDelta().y()), canvasToMap(event->position()));

    this->update();
    event->accept();
}
