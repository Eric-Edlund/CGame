#include "pathfinder.h"
#include "node.h"
#include <iostream>
#include <limits>


/*template<class T> PathFinder<T>::PathFinder(Graph<T>* g)
{
    graph = g;
}

template<class T> Path<T> PathFinder<T>::connect(Agent<T>* agent, T* start, T* target){
    //https://www.programiz.com/dsa/dijkstra-algorithm

    graph->clearSearchCache();
    explorePath(start);

    Path<T> path = Path<T>();
    if(target->cost == std::numeric_limits<double>::infinity()){
        path.exists = false;
        return path;
    }
    path.exists = true;
    path.cost = target->cost;
    T* step = target;
    while(step != start){
        path.steps.insert(step);
        step = step->prior;
    }
    return path;
}

template <class T> void PathFinder<T>::explorePath(Agent<T>* agent, Node<T>* node){
    //recursive function - needs to end when:
    //- encounters node with cost <= current cost

    for(Node<T> n: graph->neighbors(node)){
        if(!agent->canMakeStep(node, n)) return;
        if(n.cost > node->cost + agent->stepCost(node, n)){// if we have found a cheaper path
            n.cost = node->cost + agent->stepCost(node, n);
            explorePath(n);
        }
    }
}
*/
