#ifndef MAPDISPLAY_H
#define MAPDISPLAY_H
//#define fragments map->fragments

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include "map.h"
#include "point.h"
#include <QPointF>
#include <QEnterEvent>
#include <QMouseEvent>
#include <QDragMoveEvent>


class MapDisplay : public QOpenGLWidget
{

public:
    MapDisplay(QWidget* parent = nullptr);
    void setFocus();
    void setFocus(Point p);//takes a game coordinate
    void setViewBox(Rectangle r);
    void updateFragments(std::vector<Fragment*> newFrags);//only called by map

public slots:
    void setMap(Map* m);
    void fitMapIntoView();
    void pauseRendering(); //because the map is being rebuilt and isn't renderable
    void resumeRendering(); //map is ready again

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
    Map* map = new Map();

private:
    //internal rendering stuff
    Rectangle viewBox = Rectangle(0,0,0,0); //the world region we can see
    Point focus();//world point thats th ecenter of the screen
    double canvasWidth = this->width();
    double canvasHeight = this->height();
    QPointF mapToCanvas(Point* p);
    QPointF mapToCanvas(Point p);
    double canvasToMap(double d);
    Point canvasToMap(QPointF* p);
    Point canvasToMap(QPointF p);
    QPointF lastPress;
    Tile* highlighted = nullptr;
    std::vector<QPointF> qpts = std::vector<QPointF>();
    void paintTile(Tile* t, QPainter* p);
    bool render = false; //keeps from drawing an incomplete map


    //map caching
    std::vector<Tile*> onScreenFragments = std::vector<Tile*>();
    void updateMapCache();

protected slots:
    void enterEvent(QEnterEvent *event) override;
    void leaveEvent(QEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;

};

#endif
