#ifndef TILE_H
#define TILE_H

#include <limits>
#include "fragment.h"

class Tile : public Fragment
{
public:
    Tile();

    std::vector<Tile*> getNeighbors();

    bool land = false;
    short type = 0;
    const static short grass = 0;
    const static short mountain = 1;
    const static short forest = 2;

    //pathfinding stuff
    Tile* prior = nullptr;
    double cost = std::numeric_limits<double>::infinity();
    const double infinity = std::numeric_limits<double>::infinity();



};

#endif // TILE_H
