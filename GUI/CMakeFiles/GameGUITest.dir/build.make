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
include GUI/CMakeFiles/GameGUITest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include GUI/CMakeFiles/GameGUITest.dir/compiler_depend.make

# Include the progress variables for this target.
include GUI/CMakeFiles/GameGUITest.dir/progress.make

# Include the compile flags for this target's objects.
include GUI/CMakeFiles/GameGUITest.dir/flags.make

GUI/CMakeFiles/GameGUITest.dir/GameGUITest_autogen/mocs_compilation.cpp.o: GUI/CMakeFiles/GameGUITest.dir/flags.make
GUI/CMakeFiles/GameGUITest.dir/GameGUITest_autogen/mocs_compilation.cpp.o: GUI/GameGUITest_autogen/mocs_compilation.cpp
GUI/CMakeFiles/GameGUITest.dir/GameGUITest_autogen/mocs_compilation.cpp.o: GUI/CMakeFiles/GameGUITest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/Projects/CGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object GUI/CMakeFiles/GameGUITest.dir/GameGUITest_autogen/mocs_compilation.cpp.o"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT GUI/CMakeFiles/GameGUITest.dir/GameGUITest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/GameGUITest.dir/GameGUITest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/GameGUITest.dir/GameGUITest_autogen/mocs_compilation.cpp.o -c /home/eric/Projects/CGame/GUI/GameGUITest_autogen/mocs_compilation.cpp

GUI/CMakeFiles/GameGUITest.dir/GameGUITest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGUITest.dir/GameGUITest_autogen/mocs_compilation.cpp.i"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eric/Projects/CGame/GUI/GameGUITest_autogen/mocs_compilation.cpp > CMakeFiles/GameGUITest.dir/GameGUITest_autogen/mocs_compilation.cpp.i

GUI/CMakeFiles/GameGUITest.dir/GameGUITest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGUITest.dir/GameGUITest_autogen/mocs_compilation.cpp.s"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eric/Projects/CGame/GUI/GameGUITest_autogen/mocs_compilation.cpp -o CMakeFiles/GameGUITest.dir/GameGUITest_autogen/mocs_compilation.cpp.s

GUI/CMakeFiles/GameGUITest.dir/main.cpp.o: GUI/CMakeFiles/GameGUITest.dir/flags.make
GUI/CMakeFiles/GameGUITest.dir/main.cpp.o: GUI/main.cpp
GUI/CMakeFiles/GameGUITest.dir/main.cpp.o: GUI/CMakeFiles/GameGUITest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/Projects/CGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object GUI/CMakeFiles/GameGUITest.dir/main.cpp.o"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT GUI/CMakeFiles/GameGUITest.dir/main.cpp.o -MF CMakeFiles/GameGUITest.dir/main.cpp.o.d -o CMakeFiles/GameGUITest.dir/main.cpp.o -c /home/eric/Projects/CGame/GUI/main.cpp

GUI/CMakeFiles/GameGUITest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGUITest.dir/main.cpp.i"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eric/Projects/CGame/GUI/main.cpp > CMakeFiles/GameGUITest.dir/main.cpp.i

GUI/CMakeFiles/GameGUITest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGUITest.dir/main.cpp.s"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eric/Projects/CGame/GUI/main.cpp -o CMakeFiles/GameGUITest.dir/main.cpp.s

GUI/CMakeFiles/GameGUITest.dir/mainwindow.cpp.o: GUI/CMakeFiles/GameGUITest.dir/flags.make
GUI/CMakeFiles/GameGUITest.dir/mainwindow.cpp.o: GUI/mainwindow.cpp
GUI/CMakeFiles/GameGUITest.dir/mainwindow.cpp.o: GUI/CMakeFiles/GameGUITest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/Projects/CGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object GUI/CMakeFiles/GameGUITest.dir/mainwindow.cpp.o"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT GUI/CMakeFiles/GameGUITest.dir/mainwindow.cpp.o -MF CMakeFiles/GameGUITest.dir/mainwindow.cpp.o.d -o CMakeFiles/GameGUITest.dir/mainwindow.cpp.o -c /home/eric/Projects/CGame/GUI/mainwindow.cpp

GUI/CMakeFiles/GameGUITest.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGUITest.dir/mainwindow.cpp.i"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eric/Projects/CGame/GUI/mainwindow.cpp > CMakeFiles/GameGUITest.dir/mainwindow.cpp.i

GUI/CMakeFiles/GameGUITest.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGUITest.dir/mainwindow.cpp.s"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eric/Projects/CGame/GUI/mainwindow.cpp -o CMakeFiles/GameGUITest.dir/mainwindow.cpp.s

GUI/CMakeFiles/GameGUITest.dir/mapdisplay.cpp.o: GUI/CMakeFiles/GameGUITest.dir/flags.make
GUI/CMakeFiles/GameGUITest.dir/mapdisplay.cpp.o: GUI/mapdisplay.cpp
GUI/CMakeFiles/GameGUITest.dir/mapdisplay.cpp.o: GUI/CMakeFiles/GameGUITest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/Projects/CGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object GUI/CMakeFiles/GameGUITest.dir/mapdisplay.cpp.o"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT GUI/CMakeFiles/GameGUITest.dir/mapdisplay.cpp.o -MF CMakeFiles/GameGUITest.dir/mapdisplay.cpp.o.d -o CMakeFiles/GameGUITest.dir/mapdisplay.cpp.o -c /home/eric/Projects/CGame/GUI/mapdisplay.cpp

GUI/CMakeFiles/GameGUITest.dir/mapdisplay.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGUITest.dir/mapdisplay.cpp.i"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eric/Projects/CGame/GUI/mapdisplay.cpp > CMakeFiles/GameGUITest.dir/mapdisplay.cpp.i

GUI/CMakeFiles/GameGUITest.dir/mapdisplay.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGUITest.dir/mapdisplay.cpp.s"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eric/Projects/CGame/GUI/mapdisplay.cpp -o CMakeFiles/GameGUITest.dir/mapdisplay.cpp.s

# Object files for target GameGUITest
GameGUITest_OBJECTS = \
"CMakeFiles/GameGUITest.dir/GameGUITest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/GameGUITest.dir/main.cpp.o" \
"CMakeFiles/GameGUITest.dir/mainwindow.cpp.o" \
"CMakeFiles/GameGUITest.dir/mapdisplay.cpp.o"

# External object files for target GameGUITest
GameGUITest_EXTERNAL_OBJECTS =

GUI/GameGUITest: GUI/CMakeFiles/GameGUITest.dir/GameGUITest_autogen/mocs_compilation.cpp.o
GUI/GameGUITest: GUI/CMakeFiles/GameGUITest.dir/main.cpp.o
GUI/GameGUITest: GUI/CMakeFiles/GameGUITest.dir/mainwindow.cpp.o
GUI/GameGUITest: GUI/CMakeFiles/GameGUITest.dir/mapdisplay.cpp.o
GUI/GameGUITest: GUI/CMakeFiles/GameGUITest.dir/build.make
GUI/GameGUITest: Core/libGameCore.a
GUI/GameGUITest: /usr/lib/QT/6.2.2/gcc_64/lib/libQt6OpenGLWidgets.so.6.2.2
GUI/GameGUITest: Core/PathFinding/libPathFinder.a
GUI/GameGUITest: Core/PerlinNoise/libPerlinNoise.a
GUI/GameGUITest: /usr/lib/QT/6.2.2/gcc_64/lib/libQt6Widgets.so.6.2.2
GUI/GameGUITest: /usr/lib/QT/6.2.2/gcc_64/lib/libQt6OpenGL.so.6.2.2
GUI/GameGUITest: /usr/lib/QT/6.2.2/gcc_64/lib/libQt6Gui.so.6.2.2
GUI/GameGUITest: /usr/lib/QT/6.2.2/gcc_64/lib/libQt6Core.so.6.2.2
GUI/GameGUITest: /usr/lib/x86_64-linux-gnu/libGLX.so
GUI/GameGUITest: /usr/lib/x86_64-linux-gnu/libOpenGL.so
GUI/GameGUITest: GUI/CMakeFiles/GameGUITest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eric/Projects/CGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable GameGUITest"
	cd /home/eric/Projects/CGame/GUI && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GameGUITest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
GUI/CMakeFiles/GameGUITest.dir/build: GUI/GameGUITest
.PHONY : GUI/CMakeFiles/GameGUITest.dir/build

GUI/CMakeFiles/GameGUITest.dir/clean:
	cd /home/eric/Projects/CGame/GUI && $(CMAKE_COMMAND) -P CMakeFiles/GameGUITest.dir/cmake_clean.cmake
.PHONY : GUI/CMakeFiles/GameGUITest.dir/clean

GUI/CMakeFiles/GameGUITest.dir/depend:
	cd /home/eric/Projects/CGame && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eric/Projects/CGame /home/eric/Projects/CGame/GUI /home/eric/Projects/CGame /home/eric/Projects/CGame/GUI /home/eric/Projects/CGame/GUI/CMakeFiles/GameGUITest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : GUI/CMakeFiles/GameGUITest.dir/depend

