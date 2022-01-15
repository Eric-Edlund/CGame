#ifndef POINT_H
#define POINT_H

#include <string>


class Point
{
public:
    Point(double inx, double iny);
    double x, y;
    std::string toString();
    bool operator == (Point* p) const {
       return x == p->x && y == p->y;
    }
    bool operator == (Point p) const {
       return x == p.x && y == p.y;
    }
};

#endif // POINT_H
