#include "mainwindow.h"

#include <QApplication>
#include "fragment.h"
#include "map.h"
#include "mapmaker.h"


int main(int argc, char *argv[]){

    QApplication a(argc, argv);
    MainWindow w;
    //w.setWorld(map);
    w.show();
    return a.exec();
}
