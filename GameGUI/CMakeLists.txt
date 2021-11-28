project(GameGUI)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS Widgets OpenGL OpenGLWidgets REQUIRED)


add_library(GameGUI
    main.cpp
    mainwindow.cpp
    mapdisplay.cpp
    mainwindow.ui
)


target_include_directories(GameGUI PUBLIC ../GameCore)


#CMAKE_CURRENT_SOURCE_DIR
target_link_libraries(GameGUI PRIVATE Qt6::Widgets)
target_link_libraries(GameGUI PRIVATE Qt6::OpenGL)
target_link_libraries(GameGUI PRIVATE Qt6::OpenGLWidgets)
