#ifndef GAMEUI_H
#define GAMEUI_H

#include <QWidget>
#include <QStackedWidget>
#include "game.h"

class GameUI : public QStackedWidget
{
public:
    GameUI(QWidget* parent = nullptr);

public slots:
    void setGame(Game* game);


};

#endif // GAMEUI_H
