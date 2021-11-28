cmake_minimum_required(VERSION 3.2)
project(Game)

add_executable(${PROJECT_NAME} main.cpp)

#imports in dependancy order
add_subdirectory(GameCore)
add_subdirectory(GameGUI)


#sets include paths for pathless include lines
include_directories(PUBLIC GameCore)
#target_include_directories(${PROJECT_NAME} PUBLIC GameCore)
#target_include_directories(${PROJECT_NAME} PRIVATE GameGUI)

#paths that have headerfiles you need
target_link_directories(${PROJECT_NAME} PUBLIC GameCore GameGUI)

#add libraries to Game executable
target_link_libraries(${PROJECT_NAME} GameCore GameGUI)
