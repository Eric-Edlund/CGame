/********************************************************************************
** Form generated from reading UI file 'gameui.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEUI_H
#define UI_GAMEUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "mapdisplay.h"

QT_BEGIN_NAMESPACE

class Ui_GameUI
{
public:
    QGridLayout *gridLayout_3;
    QTabWidget *stack;
    QWidget *stackPage1;
    QGridLayout *gridLayout;
    MapDisplay *mapDisplay;
    QWidget *stackPage2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *TileName;

    void setupUi(QWidget *GameUI)
    {
        if (GameUI->objectName().isEmpty())
            GameUI->setObjectName(QString::fromUtf8("GameUI"));
        GameUI->resize(422, 272);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameUI->sizePolicy().hasHeightForWidth());
        GameUI->setSizePolicy(sizePolicy);
        GameUI->setCursor(QCursor(Qt::WaitCursor));
        gridLayout_3 = new QGridLayout(GameUI);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        stack = new QTabWidget(GameUI);
        stack->setObjectName(QString::fromUtf8("stack"));
        sizePolicy.setHeightForWidth(stack->sizePolicy().hasHeightForWidth());
        stack->setSizePolicy(sizePolicy);
        stack->setBaseSize(QSize(100, 100));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        stack->setPalette(palette);
        stack->setCursor(QCursor(Qt::ArrowCursor));
        stack->setTabShape(QTabWidget::Rounded);
        stack->setTabsClosable(false);
        stackPage1 = new QWidget();
        stackPage1->setObjectName(QString::fromUtf8("stackPage1"));
        gridLayout = new QGridLayout(stackPage1);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mapDisplay = new MapDisplay(stackPage1);
        mapDisplay->setObjectName(QString::fromUtf8("mapDisplay"));
        mapDisplay->setEnabled(true);
        sizePolicy.setHeightForWidth(mapDisplay->sizePolicy().hasHeightForWidth());
        mapDisplay->setSizePolicy(sizePolicy);
        mapDisplay->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(mapDisplay, 0, 0, 1, 1);

        stack->addTab(stackPage1, QString());
        stackPage2 = new QWidget();
        stackPage2->setObjectName(QString::fromUtf8("stackPage2"));
        gridLayout_4 = new QGridLayout(stackPage2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        TileName = new QLabel(stackPage2);
        TileName->setObjectName(QString::fromUtf8("TileName"));

        horizontalLayout->addWidget(TileName);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        stack->addTab(stackPage2, QString());

        gridLayout_3->addWidget(stack, 0, 0, 1, 1);


        retranslateUi(GameUI);

        stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GameUI);
    } // setupUi

    void retranslateUi(QWidget *GameUI)
    {
        GameUI->setWindowTitle(QCoreApplication::translate("GameUI", "GameUI", nullptr));
        stack->setTabText(stack->indexOf(stackPage1), QString());
        TileName->setText(QCoreApplication::translate("GameUI", "TextLabel", nullptr));
        stack->setTabText(stack->indexOf(stackPage2), QString());
    } // retranslateUi

};

namespace Ui {
    class GameUI: public Ui_GameUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEUI_H
