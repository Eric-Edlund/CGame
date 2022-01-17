#include "mainwindow.h"
#include <iostream>
#include <QApplication>
#include "fragment.h"
#include "map.h"
#include "mapmaker.h"

//The Real Main.cpp
int main(int argc, char *argv[]){

    Map* map = new Map();
    MapMaker m = MapMaker(map);
    //m.assignMap(map);
    m.setWidth(40);
    m.setHeight(40);
    m.make();

    std::cout << "Here" << std::endl;

    QApplication a(argc, argv);
    MainWindow w;
    w.setWorld(map);

    w.show();
    return a.exec();
}
