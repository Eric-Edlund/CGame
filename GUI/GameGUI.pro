
QT       += core gui opengl openglwidgets
#Bahhhhhh! Include openglwidgets; it says so on the website!!!

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0



SOURCES += \
    main.cpp \
    mainwindow.cpp \
    mapdisplay.cpp

HEADERS += \
    mainwindow.h \
    mapdisplay.h

INCLUDEPATH += \
    /home/eric/Projects/CGame/GameGUI/GameCore/include

LIBS += \
    /home/eric/Projects/CGame/GameGUI/GameCore/lib/libGameCore.a

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


