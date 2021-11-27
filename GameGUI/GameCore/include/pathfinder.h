#ifndef PATHFINDER_H
#define PATHFINDER_H

#include <vector>
#include "path.h"
#include "agent.h"
#include "graph.h"
#include "node.h"

template <class T> class PathFinder
{
public:
    PathFinder(Graph<T>* graph);
    Graph<T>* graph;
    Path<T> connect(Agent<T>* a, T* start, T* end);
    void setCostLimit(double limit);

private:
    void explorePath(Agent<T>* agent, Node<T>* node);
};



#endif // PATHFINDER_H
