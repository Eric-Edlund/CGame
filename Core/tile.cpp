#include "tile.h"
#include <iostream>

Tile::Tile()
{

}


std::vector<Tile*> Tile::getNeighbors(){
    std::vector<Tile*> ns = std::vector<Tile*>();

    for(Fragment* f: neighbors)
        ns.push_back((Tile*) f);

    return ns;
}
