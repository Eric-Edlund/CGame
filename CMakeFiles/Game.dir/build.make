# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/eric/Projects/CGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eric/Projects/CGame

# Include any dependencies generated for this target.
include CMakeFiles/Game.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Game.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Game.dir/flags.make

CMakeFiles/Game.dir/main.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/main.cpp.o: main.cpp
CMakeFiles/Game.dir/main.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/Projects/CGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Game.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/main.cpp.o -MF CMakeFiles/Game.dir/main.cpp.o.d -o CMakeFiles/Game.dir/main.cpp.o -c /home/eric/Projects/CGame/main.cpp

CMakeFiles/Game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eric/Projects/CGame/main.cpp > CMakeFiles/Game.dir/main.cpp.i

CMakeFiles/Game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eric/Projects/CGame/main.cpp -o CMakeFiles/Game.dir/main.cpp.s

# Object files for target Game
Game_OBJECTS = \
"CMakeFiles/Game.dir/main.cpp.o"

# External object files for target Game
Game_EXTERNAL_OBJECTS =

Game: CMakeFiles/Game.dir/main.cpp.o
Game: CMakeFiles/Game.dir/build.make
Game: Core/libGameCore.a
Game: GUI/libGameGUI.a
Game: /usr/lib/QT/6.2.2/gcc_64/lib/libQt6OpenGLWidgets.so.6.2.2
Game: Core/PathFinding/libPathFinder.a
Game: Core/PerlinNoise/libPerlinNoise.a
Game: /usr/lib/QT/6.2.2/gcc_64/lib/libQt6Widgets.so.6.2.2
Game: /usr/lib/QT/6.2.2/gcc_64/lib/libQt6OpenGL.so.6.2.2
Game: /usr/lib/QT/6.2.2/gcc_64/lib/libQt6Gui.so.6.2.2
Game: /usr/lib/QT/6.2.2/gcc_64/lib/libQt6Core.so.6.2.2
Game: /usr/lib/x86_64-linux-gnu/libGLX.so
Game: /usr/lib/x86_64-linux-gnu/libOpenGL.so
Game: CMakeFiles/Game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eric/Projects/CGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Game.dir/build: Game
.PHONY : CMakeFiles/Game.dir/build

CMakeFiles/Game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Game.dir/clean

CMakeFiles/Game.dir/depend:
	cd /home/eric/Projects/CGame && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eric/Projects/CGame /home/eric/Projects/CGame /home/eric/Projects/CGame /home/eric/Projects/CGame /home/eric/Projects/CGame/CMakeFiles/Game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Game.dir/depend

