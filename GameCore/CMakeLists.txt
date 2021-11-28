
#project(GameCore LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(GameCoreTest
    main.cpp

    )

target_link_libraries(GameCoreTest
    GameCore

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
    mapmaker.h mapmaker.cpp
    tile.h tile.cpp
    utilities.cpp
    utilities.h
    agent.h
    pathfinder.h pathfinder.cpp

    node.h
    graph.h


    PerlinNoise/PerlinNoise.h
    PerlinNoise/PerlinNoise.cpp
    )


#target_link_libraries(GameCorePathFinder/libPathFinder.a)
