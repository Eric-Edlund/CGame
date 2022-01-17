#include "mapmaker.h"
#include "PerlinNoise.h"
#include <vector>
#include "geometry.h"
#include <iostream>

using namespace std;

MapMaker::MapMaker()//makes maps
{


}

MapMaker::MapMaker(Map* m)//makes maps
{
    assignMap(m);

}

void MapMaker::setWidth(int w){
    if(w > 0 && w != width){
        width = w;
        emit widthChanged(w);
    }

}

void MapMaker::setHeight(int h){
    if(h > 0 && h != height){
        height = h;
        emit heightChanged(h);
    }
}

void MapMaker::updateWidth(int w){
    if(w > 0 && w != width){
        width = w;
        make();
        emit widthChanged(w);
    }

}

void MapMaker::updateHeight(int h){
    if(h > 0 && h != height){
        height = h;
        make();
        emit heightChanged(h);
    }
}

void MapMaker::make(){

    emit startBuilding();

    map->tiles.clear();

    PerlinNoise noise(seed);
    int w = width; //(int) dimensions.width();//make sure > 0;
    int h = height; //(int) dimensions.height();

    vector<vector<Point*>> points = vector<vector<Point*>>();


    //create all verticies
    for(int x=0; x<w; x++){
        points.push_back(vector<Point*>());
        for(int y=0; y<h; y++){
            points.at(x).push_back(new Point(x, y));
        }
    }


    vector<vector<Edge*>> hedges = vector<vector<Edge*>>();
    vector<vector<Edge*>> vedges = vector<vector<Edge*>>();


    for(int x=0; x<w-1; x++){
        hedges.push_back(vector<Edge*>());
        vedges.push_back(vector<Edge*>());

        for(int y=0; y<h-1; y++){
            hedges.at(x).push_back(new Edge(points.at(x).at(y), points.at(x+1).at(y)));
            vedges.at(x).push_back(new Edge(points.at(x).at(y), points.at(x).at(y+1)));

        }
    }


    hedges.push_back(vector<Edge*>());
    for(int x = 0; x<w-1; x++){//top row of horizontal edges
        hedges.at(x).push_back(new Edge(points.at(x).at(h-1), points.at(x+1).at(h-1)));
    }


    vedges.push_back(vector<Edge*>());
    for(int y=0; y<h-1; y++){//right row of verticle edges
        vedges.at(w-1).push_back(new Edge(points.at(w-1).at(y), points.at(w-1).at(y+1)));
    }


    vector<vector<Tile*>> tiles = vector<vector<Tile*>>();
    for(int x=0; x<w-1; x++){
        tiles.push_back(vector<Tile*>());
        for(int y=0; y<h-1; y++){

            tiles.at(x).push_back(new Tile());
            tiles.at(x).at(y)->addEdge(hedges.at(x).at(y));
            tiles.at(x).at(y)->addEdge(vedges.at(x).at(y));
            tiles.at(x).at(y)->addEdge(hedges.at(x).at(y+1));
            tiles.at(x).at(y)->addEdge(vedges.at(x+1).at(y));
            map->add(tiles.at(x).at(y));
        }
    }

    for(Tile* t: map->tiles){
        t->updateNeighbors();
        if(noise.noise(t->center().x/(scale*7), t->center().y/(scale*7), 0.8) < percentLand){
            t->land = true;
            if(noise.noise(t->center().x/(scale*3), t->center().y/(scale*3), 3.4) < .29)
                t->type = Tile::mountain;
            else if(noise.noise(t->center().x/(scale*4), t->center().y/(scale*4), 7.4) < .38)
                t->type = Tile::forest;

        }
        else t->land = false;
    }


    emit doneBuilding();

}



void MapMaker::assignMap(Map* m){
    this->map = m;
}

