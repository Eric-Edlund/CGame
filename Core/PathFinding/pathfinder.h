#ifndef PATHFINDER_H
#define PATHFINDER_H

#include <vector>
#include "../tile.h"
#include "tileagent.h"
#include "../map.h"
#include <limits>
#include <algorithm>

struct TilePath
{
public:
    std::vector<Tile*> steps = std::vector<Tile*>();
    double totalCost = std::numeric_limits<double>::infinity();
    bool exists = false;
};

class PathFinder //only works on Map class
{
public:
    PathFinder(Map* map);
    Map* map;
    TilePath connectTiles (TileAgent* a, Tile* start, Tile* end);
    void setCostLimit(double limit);

private:
    void exploreTilePath (TileAgent* agent, Tile* node);
};


PathFinder::PathFinder(Map* m)
{
    map = m;
}

TilePath PathFinder::connectTiles(TileAgent* agent, Tile* start, Tile* target){//TODO: Verify this works
    //https://www.programiz.com/dsa/dijkstra-algorithm

    map->clearSearchCache();
    exploreTilePath(agent, start);

    TilePath path = TilePath();
    if(target->cost == std::numeric_limits<double>::infinity()){
        path.exists = false;
        return path;
    }
    path.exists = true;
    path.totalCost = target->cost;
    Tile* step = target;
    while(step != start){
        path.steps.push_back(step);
        step = step->prior;
    }
    std::reverse(path.steps.begin(), path.steps.end());
    return path;
}

void PathFinder::exploreTilePath(TileAgent* agent, Tile* node ){
    //recursive function - needs to end when:
    //- encounters node with cost <= current cost

    for(Tile* n: map->neighbors(node)){

        if(!agent->canMakeStep(node, n)) return;
        if(n->cost > node->cost + agent->stepCost(node, n)){// if we have found a cheaper path
            n->cost = node->cost + agent->stepCost(node, n);
            exploreTilePath(agent, n);
        }
    }
}


#endif // PATHFINDER_H
