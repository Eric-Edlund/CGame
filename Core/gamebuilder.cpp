#include "gamebuilder.h"
#include <iostream>


void GameBuilder::buildGameFromScratch(){
    emit startedBuilding();

    //troubleshooting guide:
    //1. Make sure there's a mapMaker assigned
    //2.

    std::cout << "Building world gamebuilder.cpp" <<std::endl;
    target = new Game();

    //Only single player for now
    target->numPlayers = 1;
    emit buildPercentProgress(100); //periodically update percent of build complete
    emit gameReady(target);
}


//emit gameReady(target);


