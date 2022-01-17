#ifndef GAMEBUILDER_H
#define GAMEBUILDER_H

#include <QObject>
#include "game.h"
#include "mapmaker.h"

//only called once, not like mapMaker.
class GameBuilder : public QObject
{
    Q_OBJECT

public:
    MapMaker* mapMaker;

public slots:
    void buildGameFromScratch(); //takes input parameters from the world building menu and generates a playable world
    //For now, the only variables are the map gen ones, and those are stored in the mapMaker, so no input parameters.

signals:
    void gameReady(Game* game);

private:
    Game* target; //the thing we're working on

};

#endif // GAMEBUILDER_H
