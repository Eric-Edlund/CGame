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

    //The Main window has 3 pages, the start page, the build new world page and the playing-the-game page
    void switchToNewWorldPage();
    void switchToStartPage();
    void switchToGamePage();

    void playBuiltWorld(); //When the "Play" button is hit on the game builder page
    void gameStartedBuilding();//sloppy fix, called by GameBuilder to change button visibility
    void gameDoneBuilding();//another stupid sloppy fix because the GameBuilder class can't emit a signal to set button visibility
    void resetBuildWorldPage();//after the world is build, reset the menu so it can make a new world.


private:
    Ui::MainWindow *ui;
    Map* generatedMap = new Map(); //The map in the map maker page
    MapMaker* mapMaker = new MapMaker(generatedMap);
    GameBuilder* gameBuilder = new GameBuilder();
};
#endif // MAINWINDOW_H
