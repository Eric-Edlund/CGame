#ifndef GEOMETRY_H
#define GEOMETRY_H

#include "point.h"
#include <cmath>
#include <limits>
#include <random>
#include "rectangle.h"


#define infinity std::numeric_limits<double>::infinity()

double distance(Point* p, Point* p1);

Point* gxMax(Point* p, Point* p1);
Point* gxMin(Point* p, Point* p1);

Point randomPt(Rectangle* r);

#endif // GEOMETRY_H
