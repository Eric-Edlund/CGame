#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "map.h"
#include "mapmaker.h"
#include "gamebuilder.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void setWorld(Map* m);
    ~MainWindow();

private slots:
    void on_GameWindow_aboutToCompose();
    void switchToNewWorldPage();
    void switchToStartPage();

private:
    Ui::MainWindow *ui;
    Map* generatedMap = new Map(); //The map in the map maker page
    MapMaker* mapMaker = new MapMaker(generatedMap);
    GameBuilder* gameBuilder = new GameBuilder();
};
#endif // MAINWINDOW_H
