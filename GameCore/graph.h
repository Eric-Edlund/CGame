#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include "node.h"

class Graph
{
public:
    virtual std::vector<Node*> neighbors(Node* node);
    virtual std::vector<Node*> allNodes();
    virtual void clearSearchCache();
};

#endif // GRAPH_H
