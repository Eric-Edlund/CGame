#ifndef PATHFINDER_H
#define PATHFINDER_H

#include <vector>

#include "agent.h"
#include "graph.h"
#include "node.h"
#include <limits>
#include <algorithm>

template <class T> struct Path{
public:
    std::vector<T*> steps = std::vector<T*>();
    double totalCost = std::numeric_limits<double>::infinity();
    bool exists = false;
};

template <class T> class PathFinder
{
public:
    PathFinder(Graph* graph);
    Graph* graph;
    Path<T> connect(Agent* a, Node* start, Node* end);
    void setCostLimit(double limit);

private:
    void explorePath(Agent* agent, Node* node);
};


template<class T> PathFinder<T>::PathFinder(Graph* g)
{
    graph = g;
}

template<class T> Path<T> PathFinder<T>::connect(Agent* agent, Node* start, Node* target){
    //https://www.programiz.com/dsa/dijkstra-algorithm

    graph->clearSearchCache();
    explorePath(agent, start);

    Path<T> path = Path<T>();
    if(target->cost == std::numeric_limits<double>::infinity()){
        path.exists = false;
        return path;
    }
    path.exists = true;
    path.totalCost = target->cost;
    T* step = static_cast<T*>(target);
    while(step != start){
        path.steps.push_back(step);
        step = static_cast<T*>(step->prior);
    }
    std::reverse(path.steps.begin(), path.steps.end());
    return path;
}

template <class T> void PathFinder<T>::explorePath(Agent* agent, Node* node){
    //recursive function - needs to end when:
    //- encounters node with cost <= current cost

    for(Node* n: graph->neighbors(node)){

        if(!agent->canMakeStep(static_cast<T*>(node), static_cast<T*>(n))) return;
        if(n->cost > node->cost + agent->stepCost(static_cast<T*>(node), static_cast<T*>(n))){// if we have found a cheaper path
            n->cost = node->cost + agent->stepCost(static_cast<T*>(node), static_cast<T*>(n));
            explorePath(agent, n);
        }
    }
}


#endif // PATHFINDER_H
