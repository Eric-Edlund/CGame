project(PathFinder LANGUAGES CXX)

add_library(PathFinder STATIC
    pathfinder.h
    pathfinder.cpp
    tileagent.h
    path.h
)

include_directories(PathFinder ../)
