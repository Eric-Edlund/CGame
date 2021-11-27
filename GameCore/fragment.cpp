#include "fragment.h"
#include <vector>
#include "point.h"
#include "edge.h"
#include "iterator"
#include "line.h"
#include <iostream>



Fragment::Fragment()
{

}

void Fragment::addEdge(Edge* e)
{
    //check if we already have edge
    if(containsEdge(e))  std::printf("Fragment.addEdge()\n");
    edges.push_back(e);
    //std::cout << "Here" << std::endl;

    //add this to edge
    if(e->c == nullptr) e->c = this;
    else if(e->d == nullptr) e->d = this;
    else std::cout << "Adding Fragment to Full Edge - GameCore.fragment.addEdge()" << std::endl;

    //update neighbors
    updateNeighbors();

    //update verticies list
    calibrateVerticies();

}

void Fragment::updateNeighbors(){
    neighbors.clear();
    for(Edge* e: edges){
        Fragment* test = e->getOther(this);
        if(test != nullptr)
            neighbors.push_back(test);
    }
    //std::cout << neighbors.size() << std::endl;
}

void Fragment::calibrateVerticies(){
    if(edges.size() < 3) return;
    //for(Edge* e: edges) std::cout << e->toString() << std::endl;

    std::vector<Edge*> temp = std::vector<Edge*>(edges);
    temp.erase(temp.begin());



    auto removeit = [&](int i){
        temp.erase(temp.begin() + i);
    };

    std::vector<Point*> newList = std::vector<Point*>();
    Point* lastpt = edges.at(0)->a;
    newList.push_back(lastpt);

    nextEdge:;
    //std::cout << "Searching among " << temp.size() << std::endl;
    for(int i=0; i<temp.size(); i++){
        //std::cout << "Checking if " << temp.at(i)->toString() << " contains " << lastpt->toString() << std::endl;

        if(temp.at(i)->hasEndPoint(lastpt)){

            newList.push_back(temp.at(i)->getNot(lastpt));
            lastpt = temp.at(i)->getNot(lastpt);
            //std::cout << temp.at(i)->toString() << std::endl;
            removeit(i);//remove edge from list
            goto nextEdge;
        }
    }

    verts = newList;
    //std::cout << "Edges: " << edges.size() << std::endl;
    //std::cout << "Verts: " << newList.size() << std::endl;

}

void Fragment::removeEdge(Edge* e){

    if(e->c == this) e->c = nullptr;
    else if(e->d == this) e->d = nullptr;
    for(int i=0; i< edges.size()-1; i++)
        if(edges.at(i) == e)
            edges.erase(edges.begin() + i);

    updateNeighbors();
    calibrateVerticies();
}

bool Fragment::containsEdge(Edge* e){

    //std::cout << edges.size() << std::endl;
    if(edges.size() == 0) return false;

    for(int i=0; i<edges.size()-1; i++)
        if(edges.at(i) == e)
            return true;


    return false;
}

bool Fragment::intersects(Line* line){
    for(Line* l: edges)
        if(l->intersects(line)) return true;
    return false;
}

std::vector<Edge*> Fragment::getEdges(){
    return std::vector<Edge*>(edges);
}

bool Fragment::contains(Point* p){
    Point refrence = Point(p->x+9999, p->y+9999);
    Line ray = Line(p, &refrence);
    int counter = 0;
    for(Line* l: edges){
        if(l->intersectsC(&ray)){
            counter++;
            //std::cout << l->a->toString() + " " + l->b->toString() << std::endl;

        }
    }
    return (counter % 2 != 0);
}
bool Fragment::contains(Point p){
    return contains(&p);
}

double Fragment::getArea(){//https://www.mathsisfun.com/geometry/area-irregular-polygons.html
    double area = 0;
    double height;
    double width;
    double relativeMinimum = 0; //replacement for the x axis

    for(Edge *e: edges) if(e->a->y < relativeMinimum) relativeMinimum = e->a->y;

    for(Line *l: edges){
        height = ((l->a->y + l->b->y) - relativeMinimum)/2;
        width = l->b->x - l->a->x;
        area += height*width;
    }
    return area;
}

std::vector<Point*> Fragment::getVerticies(){
    return verts;
}

Point Fragment::center(){
    double x = 0, y = 0;
    for(Point* p: verts){
        x += p->x;
        y += p->y;
    }
    x /= verts.size();
    y /= verts.size();

    return Point(x, y);
}




