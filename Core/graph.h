#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include "node.h"
#include "tile.h"

template <class T> class Graph
{
public:
    virtual std::vector<Node*> neighbors(Node* node);
    virtual std::vector<Node*> allNodes();
    virtual void clearSearchCache();
};

template Graph<Tile>;

#endif // GRAPH_H
