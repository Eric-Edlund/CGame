#ifndef MAPMAKER_H
#define MAPMAKER_H

#include "map.h"

class MapMaker
{
public:
    MapMaker();
    Map* make(int seed);
    Rectangle dimensions = Rectangle(-10,-10,10,10);
    double ptDensity = 1; //(1 pt per square unit)
    double percentLand = 0.5;
    double scale = 1;
};

#endif // MAPMAKER_H
