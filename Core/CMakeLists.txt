cmake_minimum_required(VERSION 3.5)

project(GameCore LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt6 COMPONENTS Core REQUIRED)

add_executable(GameCoreTest main.cpp)

#direct dependancy
target_link_libraries(GameCoreTest
GameCore
Qt6::Core
)

add_library(GameCore STATIC
    point.h point.cpp
    edge.h edge.cpp
    fragment.h fragment.cpp
    geometry.h geometry.cpp
    line.h line.cpp
    map.h
    map.cpp
    rectangle.h
    rectangle.cpp
    mapmaker.h mapmaker.cpp
    tile.h tile.cpp
    utilities.cpp
    utilities.h
    gamebuilder.h
    gamebuilder.cpp

    )

add_subdirectory(PathFinding)
add_subdirectory(PerlinNoise)

include_directories(GameCore
    PathFinding/
    PerlinNoise/)

target_link_libraries(GameCore PRIVATE
    PathFinder
    PerlinNoise
    Qt6::Core
    )



