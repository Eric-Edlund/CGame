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
include GUI/CMakeFiles/GameGUI.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include GUI/CMakeFiles/GameGUI.dir/compiler_depend.make

# Include the progress variables for this target.
include GUI/CMakeFiles/GameGUI.dir/progress.make

# Include the compile flags for this target's objects.
include GUI/CMakeFiles/GameGUI.dir/flags.make

GUI/CMakeFiles/GameGUI.dir/GameGUI_autogen/mocs_compilation.cpp.o: GUI/CMakeFiles/GameGUI.dir/flags.make
GUI/CMakeFiles/GameGUI.dir/GameGUI_autogen/mocs_compilation.cpp.o: GUI/GameGUI_autogen/mocs_compilation.cpp
GUI/CMakeFiles/GameGUI.dir/GameGUI_autogen/mocs_compilation.cpp.o: GUI/CMakeFiles/GameGUI.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/Projects/CGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object GUI/CMakeFiles/GameGUI.dir/GameGUI_autogen/mocs_compilation.cpp.o"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT GUI/CMakeFiles/GameGUI.dir/GameGUI_autogen/mocs_compilation.cpp.o -MF CMakeFiles/GameGUI.dir/GameGUI_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/GameGUI.dir/GameGUI_autogen/mocs_compilation.cpp.o -c /home/eric/Projects/CGame/GUI/GameGUI_autogen/mocs_compilation.cpp

GUI/CMakeFiles/GameGUI.dir/GameGUI_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGUI.dir/GameGUI_autogen/mocs_compilation.cpp.i"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eric/Projects/CGame/GUI/GameGUI_autogen/mocs_compilation.cpp > CMakeFiles/GameGUI.dir/GameGUI_autogen/mocs_compilation.cpp.i

GUI/CMakeFiles/GameGUI.dir/GameGUI_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGUI.dir/GameGUI_autogen/mocs_compilation.cpp.s"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eric/Projects/CGame/GUI/GameGUI_autogen/mocs_compilation.cpp -o CMakeFiles/GameGUI.dir/GameGUI_autogen/mocs_compilation.cpp.s

GUI/CMakeFiles/GameGUI.dir/mainwindow.cpp.o: GUI/CMakeFiles/GameGUI.dir/flags.make
GUI/CMakeFiles/GameGUI.dir/mainwindow.cpp.o: GUI/mainwindow.cpp
GUI/CMakeFiles/GameGUI.dir/mainwindow.cpp.o: GUI/CMakeFiles/GameGUI.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/Projects/CGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object GUI/CMakeFiles/GameGUI.dir/mainwindow.cpp.o"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT GUI/CMakeFiles/GameGUI.dir/mainwindow.cpp.o -MF CMakeFiles/GameGUI.dir/mainwindow.cpp.o.d -o CMakeFiles/GameGUI.dir/mainwindow.cpp.o -c /home/eric/Projects/CGame/GUI/mainwindow.cpp

GUI/CMakeFiles/GameGUI.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGUI.dir/mainwindow.cpp.i"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eric/Projects/CGame/GUI/mainwindow.cpp > CMakeFiles/GameGUI.dir/mainwindow.cpp.i

GUI/CMakeFiles/GameGUI.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGUI.dir/mainwindow.cpp.s"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eric/Projects/CGame/GUI/mainwindow.cpp -o CMakeFiles/GameGUI.dir/mainwindow.cpp.s

GUI/CMakeFiles/GameGUI.dir/mapdisplay.cpp.o: GUI/CMakeFiles/GameGUI.dir/flags.make
GUI/CMakeFiles/GameGUI.dir/mapdisplay.cpp.o: GUI/mapdisplay.cpp
GUI/CMakeFiles/GameGUI.dir/mapdisplay.cpp.o: GUI/CMakeFiles/GameGUI.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/Projects/CGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object GUI/CMakeFiles/GameGUI.dir/mapdisplay.cpp.o"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT GUI/CMakeFiles/GameGUI.dir/mapdisplay.cpp.o -MF CMakeFiles/GameGUI.dir/mapdisplay.cpp.o.d -o CMakeFiles/GameGUI.dir/mapdisplay.cpp.o -c /home/eric/Projects/CGame/GUI/mapdisplay.cpp

GUI/CMakeFiles/GameGUI.dir/mapdisplay.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGUI.dir/mapdisplay.cpp.i"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eric/Projects/CGame/GUI/mapdisplay.cpp > CMakeFiles/GameGUI.dir/mapdisplay.cpp.i

GUI/CMakeFiles/GameGUI.dir/mapdisplay.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGUI.dir/mapdisplay.cpp.s"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eric/Projects/CGame/GUI/mapdisplay.cpp -o CMakeFiles/GameGUI.dir/mapdisplay.cpp.s

GUI/CMakeFiles/GameGUI.dir/gameui.cpp.o: GUI/CMakeFiles/GameGUI.dir/flags.make
GUI/CMakeFiles/GameGUI.dir/gameui.cpp.o: GUI/gameui.cpp
GUI/CMakeFiles/GameGUI.dir/gameui.cpp.o: GUI/CMakeFiles/GameGUI.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/Projects/CGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object GUI/CMakeFiles/GameGUI.dir/gameui.cpp.o"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT GUI/CMakeFiles/GameGUI.dir/gameui.cpp.o -MF CMakeFiles/GameGUI.dir/gameui.cpp.o.d -o CMakeFiles/GameGUI.dir/gameui.cpp.o -c /home/eric/Projects/CGame/GUI/gameui.cpp

GUI/CMakeFiles/GameGUI.dir/gameui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGUI.dir/gameui.cpp.i"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eric/Projects/CGame/GUI/gameui.cpp > CMakeFiles/GameGUI.dir/gameui.cpp.i

GUI/CMakeFiles/GameGUI.dir/gameui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGUI.dir/gameui.cpp.s"
	cd /home/eric/Projects/CGame/GUI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eric/Projects/CGame/GUI/gameui.cpp -o CMakeFiles/GameGUI.dir/gameui.cpp.s

# Object files for target GameGUI
GameGUI_OBJECTS = \
"CMakeFiles/GameGUI.dir/GameGUI_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/GameGUI.dir/mainwindow.cpp.o" \
"CMakeFiles/GameGUI.dir/mapdisplay.cpp.o" \
"CMakeFiles/GameGUI.dir/gameui.cpp.o"

# External object files for target GameGUI
GameGUI_EXTERNAL_OBJECTS =

GUI/libGameGUI.a: GUI/CMakeFiles/GameGUI.dir/GameGUI_autogen/mocs_compilation.cpp.o
GUI/libGameGUI.a: GUI/CMakeFiles/GameGUI.dir/mainwindow.cpp.o
GUI/libGameGUI.a: GUI/CMakeFiles/GameGUI.dir/mapdisplay.cpp.o
GUI/libGameGUI.a: GUI/CMakeFiles/GameGUI.dir/gameui.cpp.o
GUI/libGameGUI.a: GUI/CMakeFiles/GameGUI.dir/build.make
GUI/libGameGUI.a: GUI/CMakeFiles/GameGUI.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eric/Projects/CGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libGameGUI.a"
	cd /home/eric/Projects/CGame/GUI && $(CMAKE_COMMAND) -P CMakeFiles/GameGUI.dir/cmake_clean_target.cmake
	cd /home/eric/Projects/CGame/GUI && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GameGUI.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
GUI/CMakeFiles/GameGUI.dir/build: GUI/libGameGUI.a
.PHONY : GUI/CMakeFiles/GameGUI.dir/build

GUI/CMakeFiles/GameGUI.dir/clean:
	cd /home/eric/Projects/CGame/GUI && $(CMAKE_COMMAND) -P CMakeFiles/GameGUI.dir/cmake_clean.cmake
.PHONY : GUI/CMakeFiles/GameGUI.dir/clean

GUI/CMakeFiles/GameGUI.dir/depend:
	cd /home/eric/Projects/CGame && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eric/Projects/CGame /home/eric/Projects/CGame/GUI /home/eric/Projects/CGame /home/eric/Projects/CGame/GUI /home/eric/Projects/CGame/GUI/CMakeFiles/GameGUI.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : GUI/CMakeFiles/GameGUI.dir/depend

