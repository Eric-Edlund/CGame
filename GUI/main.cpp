#include "mainwindow.h"

#include <QApplication>
#include "fragment.h"
#include "map.h"
#include "mapmaker.h"


int main(int argc, char *argv[]){

    MapMaker m = MapMaker();
    m.dimensions = Rectangle(0,0,40,40);
    Map* map = m.make(1);
    QApplication a(argc, argv);
    MainWindow w;
    w.setWorld(map);
    w.show();
    return a.exec();
}
