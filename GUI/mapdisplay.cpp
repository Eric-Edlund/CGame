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
#define In std::cout << "In" << std::endl;
#define Out std::cout << "Out" << std::endl;
#define Flag std::cout << "Flag" << std::endl;


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

void MapDisplay::updateMapCache(){//FIXME: Clipping should be done here
    onScreenFragments.clear();
    for(Tile* t: tiles){
        onScreenFragments.push_back(t);
    }

    return;
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
//Out
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
        //Out
        p->setPen(Qt::blue);
        p->setBrush(Qt::blue);

    }
//Flag

//t->getVerticies().size();

    for(Point* p: t->getVerticies()){

        //std::cout << "Mid" << std::endl;
        qpts.push_back(mapToCanvas(p));
    }


    if(qpts.size() == 0) return;

    p->drawPolygon(&qpts.at(0), qpts.size(), Qt::FillRule::OddEvenFill);


    qpts.clear();

}

void MapDisplay::paintGL(){
    if(!render) return;
    QPainter p(this);

    if(map == nullptr) return;
    //std::cout << onScreenFragments.size() << std::endl;

    //paint tiles
    for(Tile* t: onScreenFragments){
        //In
        paintTile(t, &p);

    }


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
    if(m == map) return;
    map = m;
    updateMapCache();
    update();

}

void MapDisplay::setFocus(){
    viewBox.moveCenterTo(map->getBounds().getCenter());
    update();
}

void MapDisplay::setFocus(Point p){
    viewBox.moveCenterTo(p);
    updateMapCache();
    update();
}

void MapDisplay::setViewBox(Rectangle r){
    viewBox = r;

}
Point MapDisplay::focus(){
    updateMapCache();
    return viewBox.getCenter();
}

void MapDisplay::enterEvent (QEnterEvent* event )
{
//std::cout << "Entered" << std::endl;
}

void MapDisplay::leaveEvent(QEvent *event){
    highlighted = nullptr;

}


void MapDisplay::mousePressEvent(QMouseEvent *event){
    lastPress = event->pos();
    canvasToMap(event->pos());
    //std::cout << "Mouse Pressed" << std::endl;
    event->accept();
}

void MapDisplay::mouseMoveEvent(QMouseEvent *event){
    if(event->buttons() == Qt::LeftButton){
        double xChange = canvasToMap(lastPress.x() - event->pos().x());
        double yChange = event->pos().y() - lastPress.y();
        yChange  = canvasToMap(yChange);

        setFocus(Point(focus().x + xChange, focus().y + yChange));//pick up here
        lastPress = event->pos();

    }else{//mouse isn't being dragged
        highlighted = nullptr;


        for(Tile* f: tiles){

            if(f->contains(canvasToMap(event->pos()))){
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

void MapDisplay::fitMapIntoView(){
    updateMapCache();
    setViewBox(map->getBounds());

    this->update();

}

void MapDisplay::pauseRendering(){
    render = false;
}

void MapDisplay::resumeRendering(){
    updateMapCache();
    render = true;
}
