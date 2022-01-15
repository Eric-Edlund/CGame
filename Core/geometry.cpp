#include "geometry.h"

double distance(Point* p, Point* p1){
    return sqrt(pow(p->x - p1->x, 2) + pow(p->y-p1->y, 2));
}

Point* gxMax(Point* p, Point* p1){
    if(p->x > p1->x) return p;
    return p1;
}
Point* gxMin(Point* p, Point* p1){
    if(p->x < p1->x) return p;
    return p1;
}

Point randomPt(Rectangle* r){
    double x, y;
    x = (std::rand()*r->width()) + r->left();
    y = (std::rand()*r->height()) + r->bottom();

    return Point(x,y);
}
