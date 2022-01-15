#include "map.h"
#include "tile.h"

Map::Map()
{

}

void Map::add(Tile* f){

    tiles.push_back(f);

    for(Point* p: f->getVerticies()){
        //p->toString();

        if(!bounds.contains(p)){

            if(p->x < bounds.left())
                bounds.p->x = p->x;
            if(p->x > bounds.right())
                bounds.p1->x = p->x;
            if(p->y < bounds.bottom())
                bounds.p->y = p->y;
            if(p->y > bounds.top())
                bounds.p1->y = p->y;
        }
    }


}

void Map::remove(Tile* f){
    for(int i=0; i<tiles.size()-1; i++){
        if(tiles.at(i) == f)
            tiles.erase(tiles.begin() + i);
    }
}

Rectangle Map::getBounds(){
    return bounds;
}


void Map::fluffBounds(double d){
    bounds.p->x -= d;
    bounds.p->y -= d;
    bounds.p1->x += d;
    bounds.p1->y += d;
}

std::vector<Node*> Map::neighbors(Node* tile){
    std::vector<Node*> nodes = std::vector<Node*>();
    for(Tile* t: static_cast<Tile*>(tile)->getNeighbors())
        nodes.push_back(t);

    return nodes;
}

std::vector<Node*> Map::allNodes(){
    std::vector<Node*> nodes = std::vector<Node*>();
    for(Tile* t: tiles)
        nodes.push_back(t);

    return nodes;
}

void Map::clearSearchCache(){
    for(Node* t: allNodes()){
        t->prior = nullptr;
        t->cost = t->infinity;
    }

}


