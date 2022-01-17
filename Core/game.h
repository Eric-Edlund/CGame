#ifndef GAME_H
#define GAME_H

#include "map.h"
#include "player.h"
#include <vector>

//Game modes / ways the game starts
#define fromScratch 0 //MSP
#define newColony 1
#define prebuiltNation 2

#define setupTurn 0 //turn 1 is the first normal turn

struct Game //one instance of a game. Will be saved from and loaded to this structure
{
public:

    //meta data stuff
    int startType = fromScratch; //how the game started
    bool pickStartingLocation = true; //do players get to choose starting location
    int numPlayers = 1;

    //state
    bool doneInitialPlacement = false;
    int turn = setupTurn;

    //content
    Map* map;
    std::vector<Player>* players;

};

#endif // GAME_H
