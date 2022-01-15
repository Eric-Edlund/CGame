#ifndef EDGE_H
#define EDGE_H

#include <vector>
#include "point.h"
#include "fragment.h"
#include "line.h"


//class Line;
class Fragment;
class Edge : public Line {
public:
    static std::vector<Edge*> all;

    Edge(Point* ain, Point* bin) : Line(ain, bin){
        all.push_back(this);
    }
    void setFragments(Fragment* a0, Fragment* a1);
    ~Edge();

    Fragment* c = nullptr;
    Fragment* d = nullptr;

    Fragment* getOther(Fragment* f);

};

#endif // EDGE_H
