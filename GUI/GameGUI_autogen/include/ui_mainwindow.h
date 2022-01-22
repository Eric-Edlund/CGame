/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mapdisplay.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *StartMenuPage;
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *NewGameButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QWidget *NewWorldPage;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QSlider *widthSlider;
    QLabel *label_3;
    QSlider *heightSlider;
    QSpacerItem *verticalSpacer_3;
    MapDisplay *WorldPreview;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BackToStartButton;
    QSpacerItem *horizontalSpacer;
    QProgressBar *gameBuildProgressBar;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *PlayBuiltWorldButton;
    QPushButton *GenerateWorldButton;
    QWidget *GamePage;
    QGridLayout *gridLayout_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(671, 482);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        StartMenuPage = new QWidget();
        StartMenuPage->setObjectName(QString::fromUtf8("StartMenuPage"));
        gridLayout = new QGridLayout(StartMenuPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(StartMenuPage);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(50);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1, Qt::AlignTop);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        NewGameButton = new QPushButton(StartMenuPage);
        NewGameButton->setObjectName(QString::fromUtf8("NewGameButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(NewGameButton->sizePolicy().hasHeightForWidth());
        NewGameButton->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(NewGameButton, 0, Qt::AlignHCenter);

        pushButton_2 = new QPushButton(StartMenuPage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(pushButton_2, 0, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        stackedWidget->addWidget(StartMenuPage);
        NewWorldPage = new QWidget();
        NewWorldPage->setObjectName(QString::fromUtf8("NewWorldPage"));
        verticalLayout_4 = new QVBoxLayout(NewWorldPage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_2 = new QLabel(NewWorldPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_5->addWidget(label_2);

        widthSlider = new QSlider(NewWorldPage);
        widthSlider->setObjectName(QString::fromUtf8("widthSlider"));
        widthSlider->setMinimum(1);
        widthSlider->setMaximum(100);
        widthSlider->setSliderPosition(10);
        widthSlider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(widthSlider);

        label_3 = new QLabel(NewWorldPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_5->addWidget(label_3);

        heightSlider = new QSlider(NewWorldPage);
        heightSlider->setObjectName(QString::fromUtf8("heightSlider"));
        heightSlider->setMinimum(1);
        heightSlider->setMaximum(100);
        heightSlider->setValue(20);
        heightSlider->setSliderPosition(20);
        heightSlider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(heightSlider);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_5);

        WorldPreview = new MapDisplay(NewWorldPage);
        WorldPreview->setObjectName(QString::fromUtf8("WorldPreview"));
        WorldPreview->setEnabled(true);
        sizePolicy.setHeightForWidth(WorldPreview->sizePolicy().hasHeightForWidth());
        WorldPreview->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(WorldPreview);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        BackToStartButton = new QPushButton(NewWorldPage);
        BackToStartButton->setObjectName(QString::fromUtf8("BackToStartButton"));

        horizontalLayout_2->addWidget(BackToStartButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        gameBuildProgressBar = new QProgressBar(NewWorldPage);
        gameBuildProgressBar->setObjectName(QString::fromUtf8("gameBuildProgressBar"));
        gameBuildProgressBar->setValue(24);

        horizontalLayout_2->addWidget(gameBuildProgressBar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        PlayBuiltWorldButton = new QPushButton(NewWorldPage);
        PlayBuiltWorldButton->setObjectName(QString::fromUtf8("PlayBuiltWorldButton"));
        PlayBuiltWorldButton->setEnabled(true);

        horizontalLayout_2->addWidget(PlayBuiltWorldButton);

        GenerateWorldButton = new QPushButton(NewWorldPage);
        GenerateWorldButton->setObjectName(QString::fromUtf8("GenerateWorldButton"));

        horizontalLayout_2->addWidget(GenerateWorldButton);


        verticalLayout_4->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(NewWorldPage);
        GamePage = new QWidget();
        GamePage->setObjectName(QString::fromUtf8("GamePage"));
        gridLayout_3 = new QGridLayout(GamePage);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(GamePage);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "To Be Titled", nullptr));
        NewGameButton->setText(QCoreApplication::translate("MainWindow", "New Game", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Load Game (Eventually)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Height", nullptr));
        BackToStartButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        PlayBuiltWorldButton->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        GenerateWorldButton->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
