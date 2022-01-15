#include "point.h"
#include <string>

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

std::string Point::toString(){
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}
