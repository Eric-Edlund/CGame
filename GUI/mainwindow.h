#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "map.h"

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

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
