#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "point.h"
#include <iostream>
#include <vector>
#include "line.h"

class Rectangle
{
public:
    Rectangle(Point* a, Point* b);
    Rectangle(double x, double y, double x1, double y1){
        p = new Point(x, y);
        p1 = new Point(x1, y1);
    }
    Point* p;//bottom left
    Point* p1;//top right
    double width(){
        return std::abs(p1->x - p->x);
    }
    double height(){
        return std::abs(p1->y - p->y);
    }
    double top(){
        return p1->y;
    }
    double bottom(){
        return p->y;
    }
    double left(){
        return p->x;
    }
    double right(){
        return p1->x;
    }
    bool operator == (Rectangle r) const {
       return *p == *r.p && *p1 == *r.p1;
    }
    bool operator != (Rectangle r) const {
       return !(*this == r);
    }
    bool contains(Point* a){
        return a->x <= p1->x && a->x >= p->x && a->y <= p1->y && a->y >= p->y;
    }
    Point getCenter(){
        return Point((p->x + p1->x)/2, (p->y + p1->y)/2);
    }

    void moveCenterTo(Point point){
        double widthOffset = width()/2;
        double heightOffset = height()/2;

        p = new Point(point.x - widthOffset, point.y - heightOffset);
                p1 = new Point(point.x + widthOffset, point.y + heightOffset);
    }

    void scale(double factor){//with respect to center
        p->x *= factor;
        p->y *= factor;
        p1->x *= factor;
        p1->y *= factor;
        //std::cout << factor << std::endl;
    }
    void scale(double factor, Point focus){//with respect to refrence
        //factor = 0.01;
        factor -=1;
        p->x = p->x - ((focus.x - p->x) * factor);
        p1->x = p1->x - ((focus.x - p1->x) * factor);

        p->y = p->y - ((focus.y - p->y) * factor);
        p1->y = p1->y - ((focus.y - p1->y) * factor);
        //std::cout << factor << std::endl;
    }
    std::vector<Line> borders(){

        std::vector<Line> list = std::vector<Line>();
        list.push_back(Line(p, new Point(p->x, p1->y)));
        list.push_back(Line(p, new Point(p1->x, p->y)));
        list.push_back(Line(new Point(p1->x, p->y), p1));
        list.push_back(Line(new Point(p->x, p1->y), p1));
        return list;
    }

    bool intersects(Line l){
        for(Line b: borders())
            if(l.intersects(&b))
                return true;
        return false;
    }
    double area(){
        return width()*height();
    }
};

#endif // RECTANGLE_H
