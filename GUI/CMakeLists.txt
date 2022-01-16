cmake_minimum_required(VERSION 3.5)

project(GameGUI VERSION 0.1 LANGUAGES CXX)

set (CMAKE_PREFIX_PATH /usr/lib/QT/6.2.2/gcc_64/lib/cmake)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets OpenGLWidgets REQUIRED)
find_package(Qt6 COMPONENTS Widgets OpenGLWidgets REQUIRED)



set(SOURCES
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    mapdisplay.h
    mapdisplay.cpp

)

add_executable(GameGUITest main.cpp ${SOURCES})


add_library(GameGUI STATIC
        ${SOURCES}
)

include_directories(GameGUI ../Core/)
include_directories(GameGUITest ../Core/)

target_link_libraries(GameGUI PRIVATE Qt6::Widgets)
target_link_libraries(GameGUI PRIVATE Qt6::OpenGLWidgets)

target_link_libraries(GameGUITest PRIVATE GameCore)
target_link_libraries(GameGUITest PRIVATE Qt6::Widgets)
target_link_libraries(GameGUITest PRIVATE Qt6::OpenGLWidgets)


