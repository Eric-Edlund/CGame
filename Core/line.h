#ifndef LINE_H
#define LINE_H

#include <vector>
#include "point.h"


class Line
{
public:
    Line(Point* ain, Point* bin);
    Point* a;
    Point* b;
    Point intersect(Line* l);//always check intersects first
    bool intersects(Line* l);
    bool intersectsC(Line* l); //doesn't include b point
    double slope();
    bool contains(Point* p);
    double yIntercept();//always check slope before asking
    bool hasEndPoint(Point* p);
    Point* getNot(Point* p);
    std::string toString();
};

#endif // LINE_H
