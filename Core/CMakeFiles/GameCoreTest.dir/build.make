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
include Core/CMakeFiles/GameCoreTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Core/CMakeFiles/GameCoreTest.dir/compiler_depend.make

# Include the progress variables for this target.
include Core/CMakeFiles/GameCoreTest.dir/progress.make

# Include the compile flags for this target's objects.
include Core/CMakeFiles/GameCoreTest.dir/flags.make

Core/CMakeFiles/GameCoreTest.dir/main.cpp.o: Core/CMakeFiles/GameCoreTest.dir/flags.make
Core/CMakeFiles/GameCoreTest.dir/main.cpp.o: Core/main.cpp
Core/CMakeFiles/GameCoreTest.dir/main.cpp.o: Core/CMakeFiles/GameCoreTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/Projects/CGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Core/CMakeFiles/GameCoreTest.dir/main.cpp.o"
	cd /home/eric/Projects/CGame/Core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Core/CMakeFiles/GameCoreTest.dir/main.cpp.o -MF CMakeFiles/GameCoreTest.dir/main.cpp.o.d -o CMakeFiles/GameCoreTest.dir/main.cpp.o -c /home/eric/Projects/CGame/Core/main.cpp

Core/CMakeFiles/GameCoreTest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameCoreTest.dir/main.cpp.i"
	cd /home/eric/Projects/CGame/Core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eric/Projects/CGame/Core/main.cpp > CMakeFiles/GameCoreTest.dir/main.cpp.i

Core/CMakeFiles/GameCoreTest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameCoreTest.dir/main.cpp.s"
	cd /home/eric/Projects/CGame/Core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eric/Projects/CGame/Core/main.cpp -o CMakeFiles/GameCoreTest.dir/main.cpp.s

# Object files for target GameCoreTest
GameCoreTest_OBJECTS = \
"CMakeFiles/GameCoreTest.dir/main.cpp.o"

# External object files for target GameCoreTest
GameCoreTest_EXTERNAL_OBJECTS =

Core/GameCoreTest: Core/CMakeFiles/GameCoreTest.dir/main.cpp.o
Core/GameCoreTest: Core/CMakeFiles/GameCoreTest.dir/build.make
Core/GameCoreTest: Core/libGameCore.a
Core/GameCoreTest: Core/CMakeFiles/GameCoreTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eric/Projects/CGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GameCoreTest"
	cd /home/eric/Projects/CGame/Core && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GameCoreTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Core/CMakeFiles/GameCoreTest.dir/build: Core/GameCoreTest
.PHONY : Core/CMakeFiles/GameCoreTest.dir/build

Core/CMakeFiles/GameCoreTest.dir/clean:
	cd /home/eric/Projects/CGame/Core && $(CMAKE_COMMAND) -P CMakeFiles/GameCoreTest.dir/cmake_clean.cmake
.PHONY : Core/CMakeFiles/GameCoreTest.dir/clean

Core/CMakeFiles/GameCoreTest.dir/depend:
	cd /home/eric/Projects/CGame && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eric/Projects/CGame /home/eric/Projects/CGame/Core /home/eric/Projects/CGame /home/eric/Projects/CGame/Core /home/eric/Projects/CGame/Core/CMakeFiles/GameCoreTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Core/CMakeFiles/GameCoreTest.dir/depend
