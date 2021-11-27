#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
