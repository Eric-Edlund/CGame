project(GameGUI)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS Core Widgets OpenGL OpenGLWidgets Gui REQUIRED)


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
target_link_libraries(GameGUI PRIVATE Qt6::Core)
target_link_libraries(GameGUI PRIVATE Qt6::Gui)
target_link_libraries(GameGUI PRIVATE Qt6::CorePrivate)
target_link_libraries(GameGUI PRIVATE Qt6::GuiPrivate)
