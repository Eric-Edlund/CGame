#include "gameui.h"
#include "ui_gameui.h"
#include <iostream>
#include <QGridLayout>

#define margin 6


GameUI::GameUI(QWidget* parent) : QStackedWidget(parent), ui(new Ui::GameUI)
{
    ui->setupUi(this);



}

void GameUI::setGame(Game* game){

    this->game = game;

    ui->mapDisplay->setMap(game->map);

}

void GameUI::resizeEvent(QResizeEvent* event){
    ui->mapDisplay->setGeometry(0,0,event->size().width(), event->size().height());
    ui->doneTurnButton->setGeometry(event->size().width()-margin, event->size().height() - margin,event->size().width() - margin, event->size().height()- margin);
}
