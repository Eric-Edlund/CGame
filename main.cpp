#include "fragment.h"
#include "map.h"
#include "mapmaker.h"
#include "gameui.h"
#include "mainwindow.h"
#include "gamebuilder.h"
#include <iostream>
#include <QApplication>
#include <QObject>



//The Real Main.cpp
int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    Map* map = new Map();
    MapMaker m = MapMaker(map);
    //m.assignMap(map);
    m.setWidth(40);
    m.setHeight(40);
    m.make();

    GameBuilder builder = GameBuilder();
    builder.mapMaker = &m;
    builder.buildGameFromScratch();

    //GameUI gameUI;
    //gameUI.show();

    //QObject::connect(&builder, &GameBuilder::gameReady, &gameUI, &GameUI::setGame);



    MainWindow w;
    w.show();



    return a.exec();
}


