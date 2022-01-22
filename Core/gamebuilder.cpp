#include "gamebuilder.h"
#include <iostream>


void GameBuilder::buildGameFromScratch(){
    emit startedBuilding();

    //troubleshooting guide:
    //1. Make sure there's a mapMaker assigned
    //2.


    target = new Game();
    mapMaker->make();
    target->map = mapMaker->map;

    //Only single player for now
    target->numPlayers = 1;

    emit buildPercentProgress(100); //periodically update percent of build complete

    emit gameReady(target);
    //std::cout << "Building world gamebuilder.cpp" <<std::endl;

}


//emit gameReady(target);


