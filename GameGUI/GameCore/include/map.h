#ifndef MAP_H
#define MAP_H

#include "fragment.h"
#include "rectangle.h"
#include <vector>
#include "graph.h"
#include "tile.h"
#include "node.h"

class Map : public Graph<Tile>
{
public:
    Map();
    void add(Tile* t);
    void remove(Tile* t);
    Rectangle getBounds();
    void fluffBounds(double d);
    std::vector<Tile*> tiles = std::vector<Tile*>();

    //graph implementation
    std::vector<Node<Tile>*> neighbors(Node<Tile>* tile);
    std::vector<Node<Tile>*> allNodes();
    void clearSearchCache();


private:

    Rectangle bounds = Rectangle(0,0,0,0);
    //std::vector<Fragment*> viewCache = std::vector<Fragment*>();
    //Rectangle lastRequest = Rectangle(0,0,0,0);
    //void updateViewCache(Rectangle* r);


};



#endif // MAP_H
