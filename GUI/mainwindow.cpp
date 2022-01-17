#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mapdisplay.h"
#include "mapmaker.h"
#include <iostream>
#include <QObject>
#include <QStackedLayout>
#include "gamebuilder.h"


#define startPage 0
#define newWorldPage 1



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(startPage);
    ui->WorldPreview->setMap(generatedMap);
    QObject::connect(ui->NewGameButton, &QPushButton::clicked, this, &MainWindow::switchToNewWorldPage);
    QObject::connect(ui->BackToStartButton, &QPushButton::clicked, this, &MainWindow::switchToStartPage);

    //World Build Menu
    QObject::connect(ui->widthSlider, &QAbstractSlider::sliderMoved, mapMaker, &MapMaker::updateWidth);
    QObject::connect(ui->heightSlider, &QAbstractSlider::sliderMoved, mapMaker, &MapMaker::updateHeight);
    QObject::connect(mapMaker, &MapMaker::widthChanged, ui->widthSlider, &QAbstractSlider::setValue);
    QObject::connect(mapMaker, &MapMaker::heightChanged, ui->heightSlider, &QAbstractSlider::setValue);


    QObject::connect(mapMaker, &MapMaker::startBuilding, ui->WorldPreview, &MapDisplay::pauseRendering);
    QObject::connect(mapMaker, &MapMaker::doneBuilding, ui->WorldPreview, &MapDisplay::resumeRendering);
    QObject::connect(mapMaker, &MapMaker::doneBuilding, ui->WorldPreview, &MapDisplay::fitMapIntoView);

    mapMaker->setHeight(ui->heightSlider->value());
    mapMaker->setWidth(ui->widthSlider->value());
    mapMaker->make();
    ui->WorldPreview->fitMapIntoView();

    gameBuilder->mapMaker = mapMaker;
    QObject::connect(ui->GenerateWorldButton, &QPushButton::clicked, gameBuilder, &GameBuilder::buildGameFromScratch);


    //Game Page Setup
    QStackedLayout* stackedLayout = new QStackedLayout();
    ui->InGamePage->setLayout(stackedLayout);
    stackedLayout->setStackingMode(QStackedLayout::StackAll);
    //QObject::connect(ui->NewGameButton, &QPushButton::clicked, this, &MainWindow::switchToNewWorldPage);
    //QObject::connect(ui->NewGameButton, &QPushButton::clicked, this, &MainWindow::switchToNewWorldPage);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_GameWindow_aboutToCompose()
{

}

void MainWindow::setWorld(Map* m){
    ui->GameWindow->setMap(m);
    //ui->GameWindow->setFocus();
    ui->GameWindow->setViewBox(m->getBounds());
    ui->GameWindow->update();
}

void MainWindow::switchToNewWorldPage(){
    ui->stackedWidget->setCurrentIndex(1);

}
void MainWindow::switchToStartPage(){
    ui->stackedWidget->setCurrentIndex(0);


}
