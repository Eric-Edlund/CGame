#ifndef MAPMAKER_H
#define MAPMAKER_H

#include "map.h"
#include <QObject>

class MapMaker : public QObject
{
    Q_OBJECT
public:
    MapMaker();
    MapMaker(Map* map);
    void make();
    void assignMap(Map* map);
    //Rectangle dimensions = Rectangle(-10,-10,10,10);
    int width = 10;
    int height = 10;
    int seed = 1;
    double ptDensity = 1; //(1 pt per square unit)
    double percentLand = 0.5;
    double scale = 1;

public slots:
    void setWidth(int w); //set just changes the var, requires map rebuild to apply
    void setHeight(int h);
    void updateWidth(int w); //rebuilds map to fit variable
    void updateHeight(int h);



signals:
    void doneBuilding();
    void startBuilding();
    void widthChanged(int w);
    void heightChanged(int w);

private:
    Map* map;
};

#endif // MAPMAKER_H
