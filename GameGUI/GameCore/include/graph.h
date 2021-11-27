#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include "node.h"

template <class T> class Graph
{
public:
    std::vector<Node<T>*> neighbors(Node<T>* node);
    std::vector<Node<T>*> allNodes();
    void clearSearchCache();
};

#endif // GRAPH_H
