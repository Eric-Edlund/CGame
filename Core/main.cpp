#include <iostream>
#include <vector>
#include "mapmaker.h"
#include "pathfinder.h"
#include "tile.h"
#include "agent.h"
#include "graph.h"



using namespace std;

int main()
{

    MapMaker m = MapMaker();
    Map* map = m.make(1);

    FillAgent agent = FillAgent();

    PathFinder<Tile> p = PathFinder<Tile>(map);
    Path<Tile> path = p.connect(&agent, map->tiles.at(1), map->tiles.at(10));



    return 0;
}
