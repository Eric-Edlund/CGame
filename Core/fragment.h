#ifndef FRAGMENT_H
#define FRAGMENT_H

#include <vector>
#include "point.h"
#include "edge.h"
#include "line.h"


class Edge;
class Fragment
{

public:
    Fragment();
    void addEdge(Edge* e);
    void removeEdge(Edge* e);

    bool contains(Point* p);
    bool contains(Point p);
    bool intersects(Line* l);
    std::vector<Edge*> getEdges();
    double getArea();
    std::vector<Point*> getVerticies();
    Point center();
    void updateNeighbors();//called by map maker, sloppy fix


protected:
    std::vector<Fragment*> neighbors = std::vector<Fragment*>();

private:
    bool containsEdge(Edge* e);
    std::vector<Edge*> edges = std::vector<Edge*>();
    std::vector<Point*> verts = std::vector<Point*>();
    void calibrateVerticies();

};

#endif // FRAGMENT_H
