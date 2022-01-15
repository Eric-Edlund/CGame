#include "edge.h"
#include <vector>
#include <iterator>
#include <iostream>


std::vector<Edge*> Edge::all = std::vector<Edge*>();

void remove(std::vector<Edge*> list, Edge* element){
    for(int i=0; i< list.size()-1; i++){
        if(list.at(i) == element)
           list.erase(list.begin() + i);
    }
}


void Edge::setFragments(Fragment* a0, Fragment* a1){
    c = a0;
    d = a1;
}


Edge::~Edge(){

    for(int i=0; i< all.size()-1; i++){
        if(all.at(i) == this)
           all.erase(all.begin() + i);
    }

}

Fragment* Edge::getOther(Fragment* f){
    if(c == f) return d;
    if(d == f) return c;
    return nullptr;
}
