cmake_minimum_required(VERSION 3.5)
project(Game)

#set(Qt6_DIR /usr/lib/QT/6.2.1/gcc_64/lib/cmake/Qt6)

add_executable(${PROJECT_NAME} main.cpp)

#tells cmake where to look for the other CMakeLists.txt files
add_subdirectory(Core)
add_subdirectory(GUI)


#add libraries to Game executable
target_link_libraries(${PROJECT_NAME} GameCore)
#target_link_libraries(${PROJECT_NAME} GameGUI)
