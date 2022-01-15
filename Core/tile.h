#ifndef TILE_H
#define TILE_H

#include "fragment.h"
#include "node.h"

class Tile : public Fragment, public Node
{
public:
    Tile();
    std::vector<Tile*> getNeighbors();

    bool land;
    short type = 0;
    const static short grass = 0;
    const static short mountain = 1;
    const static short forest = 2;



};

#endif // TILE_H
