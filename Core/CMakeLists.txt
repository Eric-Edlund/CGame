project(GameCore LANGUAGES CXX)

add_executable(GameCoreTest main.cpp)

#direct dependancy
target_link_libraries(GameCoreTest GameCore)

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
    tileagent.h
    pathfinder.h pathfinder.cpp

    node.h


    PerlinNoise/PerlinNoise.h
    PerlinNoise/PerlinNoise.cpp
    )

