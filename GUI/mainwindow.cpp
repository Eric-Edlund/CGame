#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mapdisplay.h"
#include "mapmaker.h"
#include <iostream>
#include <QObject>
#include <QStackedLayout>
#include "gamebuilder.h"
#include "gameui.h"
#include "game.h"
#include "map.h"
#include <QGridLayout>


#define startPage 0
#define newWorldPage 1

#define defaultSizeWorldSize 10



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(startPage);
    ui->PlayBuiltWorldButton->setVisible(false);
    ui->gameBuildProgressBar->setVisible(false);
    ui->gameBuildProgressBar->setValue(0);
    ui->WorldPreview->setMap(generatedMap);
    QObject::connect(ui->NewGameButton, &QPushButton::clicked, this, &MainWindow::switchToNewWorldPage);
    QObject::connect(ui->BackToStartButton, &QPushButton::clicked, this, &MainWindow::switchToStartPage);
    QObject::connect(ui->BackToStartButton, &QPushButton::clicked, this, &MainWindow::resetBuildWorldPage);
    QObject::connect(gameBuilder, &GameBuilder::buildPercentProgress, ui->gameBuildProgressBar, &QProgressBar::setValue);

    //gameUI->setParent(ui->GamePage);
    ui->GamePage->layout()->addWidget(gameUI);
    ui->GamePage->update();



    //World Build Menu
    //the two size sliders to the mapMaker
    QObject::connect(ui->widthSlider, &QAbstractSlider::sliderMoved, mapMaker, &MapMaker::updateWidth);
    QObject::connect(ui->heightSlider, &QAbstractSlider::sliderMoved, mapMaker, &MapMaker::updateHeight);
    QObject::connect(mapMaker, &MapMaker::widthChanged, ui->widthSlider, &QAbstractSlider::setValue);
    QObject::connect(mapMaker, &MapMaker::heightChanged, ui->heightSlider, &QAbstractSlider::setValue);

    //The mapmaker stops the PreviewBox from rendering an incomplete world and updates the view to fit the map
    QObject::connect(mapMaker, &MapMaker::startBuilding, ui->WorldPreview, &MapDisplay::pauseRendering);
    QObject::connect(mapMaker, &MapMaker::doneBuilding, ui->WorldPreview, &MapDisplay::resumeRendering);
    QObject::connect(mapMaker, &MapMaker::doneBuilding, ui->WorldPreview, &MapDisplay::fitMapIntoView);

    //get init world size from the sliders
    mapMaker->setHeight(ui->heightSlider->value());
    mapMaker->setWidth(ui->widthSlider->value());
    //init make the map and fit the preview box
    mapMaker->make();
    ui->WorldPreview->fitMapIntoView();

    //Configure the GameBuilder
    gameBuilder->mapMaker = mapMaker; //assign the mapMaker to the GameBuilder
    QObject::connect(ui->GenerateWorldButton, &QPushButton::clicked, gameBuilder, &GameBuilder::buildGameFromScratch); //Atatch the generate world button to the GameBuilder
    //plug it into the loading bar and play button and generate button
    QObject::connect(gameBuilder, &GameBuilder::startedBuilding, this, &MainWindow::gameStartedBuilding);
    QObject::connect(gameBuilder, &GameBuilder::gameReady, this, &MainWindow::gameDoneBuilding);
    QObject::connect(gameBuilder, &GameBuilder::gameReady, gameUI, &GameUI::setGame);

    //play button calls this.playBuildWorld
    QObject::connect(ui->PlayBuiltWorldButton, &QPushButton::clicked, this, &MainWindow::playBuiltWorld);


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::playGame(Game* g){
    gameUI->setGame(g);

}

void MainWindow::switchToNewWorldPage(){
    ui->stackedWidget->setCurrentIndex(1);

}
void MainWindow::switchToStartPage(){
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::switchToGamePage(){
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::playBuiltWorld(){
    ui->stackedWidget->setCurrentIndex(2);//switch to the game page
    resetBuildWorldPage();


}

void MainWindow::gameStartedBuilding(){
    //do ui stuff to reflect
    ui->GenerateWorldButton->setText("Building...");
    ui->gameBuildProgressBar->setVisible(true);


}

void MainWindow::gameDoneBuilding(){
    ui->GenerateWorldButton->setVisible(false);
    ui->PlayBuiltWorldButton->setVisible(true);
}

void MainWindow::resetBuildWorldPage(){
    //get ui ready for if the user decides to build two worlds in one launch
    ui->GenerateWorldButton->setText("Generate");
    ui->gameBuildProgressBar->setVisible(false);
    ui->gameBuildProgressBar->setValue(0);
    ui->GenerateWorldButton->setVisible(true);
    ui->PlayBuiltWorldButton->setVisible(false);
    ui->widthSlider->setValue(defaultSizeWorldSize);
    ui->heightSlider->setValue(defaultSizeWorldSize);

    //generatedMap = new Map();

    ui->WorldPreview->setMap(generatedMap);

    //get init world size from the sliders
    mapMaker->setHeight(ui->heightSlider->value());
    mapMaker->setWidth(ui->widthSlider->value());

}
