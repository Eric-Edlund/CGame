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

# Utility rule file for GameCoreTest_autogen.

# Include any custom commands dependencies for this target.
include Core/CMakeFiles/GameCoreTest_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include Core/CMakeFiles/GameCoreTest_autogen.dir/progress.make

Core/CMakeFiles/GameCoreTest_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/eric/Projects/CGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target GameCoreTest"
	cd /home/eric/Projects/CGame/Core && /usr/bin/cmake -E cmake_autogen /home/eric/Projects/CGame/Core/CMakeFiles/GameCoreTest_autogen.dir/AutogenInfo.json Debug

GameCoreTest_autogen: Core/CMakeFiles/GameCoreTest_autogen
GameCoreTest_autogen: Core/CMakeFiles/GameCoreTest_autogen.dir/build.make
.PHONY : GameCoreTest_autogen

# Rule to build all files generated by this target.
Core/CMakeFiles/GameCoreTest_autogen.dir/build: GameCoreTest_autogen
.PHONY : Core/CMakeFiles/GameCoreTest_autogen.dir/build

Core/CMakeFiles/GameCoreTest_autogen.dir/clean:
	cd /home/eric/Projects/CGame/Core && $(CMAKE_COMMAND) -P CMakeFiles/GameCoreTest_autogen.dir/cmake_clean.cmake
.PHONY : Core/CMakeFiles/GameCoreTest_autogen.dir/clean

Core/CMakeFiles/GameCoreTest_autogen.dir/depend:
	cd /home/eric/Projects/CGame && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eric/Projects/CGame /home/eric/Projects/CGame/Core /home/eric/Projects/CGame /home/eric/Projects/CGame/Core /home/eric/Projects/CGame/Core/CMakeFiles/GameCoreTest_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Core/CMakeFiles/GameCoreTest_autogen.dir/depend

