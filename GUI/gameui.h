#ifndef GAMEUI_H
#define GAMEUI_H

#include <QWidget>
#include <QStackedWidget>
#include "game.h"
#include <iostream>


QT_BEGIN_NAMESPACE
namespace Ui { class GameUI; }
QT_END_NAMESPACE

class GameUI : public QStackedWidget
{
    Q_OBJECT
public:
    GameUI(QWidget* parent = nullptr);


public slots:
    void setGame(Game* game);
    void resizeEvent(QResizeEvent* event) override;

private:
    Ui::GameUI *ui;
    Game* game;

};

#endif // GAMEUI_H
