# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/eric/Projects/CGame/CMakeFiles /home/eric/Projects/CGame//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/eric/Projects/CGame/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named Game

# Build rule for target.
Game: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 Game
.PHONY : Game

# fast build rule for target.
Game/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/build
.PHONY : Game/fast

#=============================================================================
# Target rules for targets named GameCore

# Build rule for target.
GameCore: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 GameCore
.PHONY : GameCore

# fast build rule for target.
GameCore/fast:
	$(MAKE) $(MAKESILENT) -f Core/CMakeFiles/GameCore.dir/build.make Core/CMakeFiles/GameCore.dir/build
.PHONY : GameCore/fast

#=============================================================================
# Target rules for targets named GameCoreTest

# Build rule for target.
GameCoreTest: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 GameCoreTest
.PHONY : GameCoreTest

# fast build rule for target.
GameCoreTest/fast:
	$(MAKE) $(MAKESILENT) -f Core/CMakeFiles/GameCoreTest.dir/build.make Core/CMakeFiles/GameCoreTest.dir/build
.PHONY : GameCoreTest/fast

#=============================================================================
# Target rules for targets named GameCore_autogen

# Build rule for target.
GameCore_autogen: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 GameCore_autogen
.PHONY : GameCore_autogen

# fast build rule for target.
GameCore_autogen/fast:
	$(MAKE) $(MAKESILENT) -f Core/CMakeFiles/GameCore_autogen.dir/build.make Core/CMakeFiles/GameCore_autogen.dir/build
.PHONY : GameCore_autogen/fast

#=============================================================================
# Target rules for targets named GameCoreTest_autogen

# Build rule for target.
GameCoreTest_autogen: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 GameCoreTest_autogen
.PHONY : GameCoreTest_autogen

# fast build rule for target.
GameCoreTest_autogen/fast:
	$(MAKE) $(MAKESILENT) -f Core/CMakeFiles/GameCoreTest_autogen.dir/build.make Core/CMakeFiles/GameCoreTest_autogen.dir/build
.PHONY : GameCoreTest_autogen/fast

#=============================================================================
# Target rules for targets named PathFinder

# Build rule for target.
PathFinder: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 PathFinder
.PHONY : PathFinder

# fast build rule for target.
PathFinder/fast:
	$(MAKE) $(MAKESILENT) -f Core/PathFinding/CMakeFiles/PathFinder.dir/build.make Core/PathFinding/CMakeFiles/PathFinder.dir/build
.PHONY : PathFinder/fast

#=============================================================================
# Target rules for targets named PathFinder_autogen

# Build rule for target.
PathFinder_autogen: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 PathFinder_autogen
.PHONY : PathFinder_autogen

# fast build rule for target.
PathFinder_autogen/fast:
	$(MAKE) $(MAKESILENT) -f Core/PathFinding/CMakeFiles/PathFinder_autogen.dir/build.make Core/PathFinding/CMakeFiles/PathFinder_autogen.dir/build
.PHONY : PathFinder_autogen/fast

#=============================================================================
# Target rules for targets named PerlinNoise

# Build rule for target.
PerlinNoise: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 PerlinNoise
.PHONY : PerlinNoise

# fast build rule for target.
PerlinNoise/fast:
	$(MAKE) $(MAKESILENT) -f Core/PerlinNoise/CMakeFiles/PerlinNoise.dir/build.make Core/PerlinNoise/CMakeFiles/PerlinNoise.dir/build
.PHONY : PerlinNoise/fast

#=============================================================================
# Target rules for targets named PerlinNoise_autogen

# Build rule for target.
PerlinNoise_autogen: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 PerlinNoise_autogen
.PHONY : PerlinNoise_autogen

# fast build rule for target.
PerlinNoise_autogen/fast:
	$(MAKE) $(MAKESILENT) -f Core/PerlinNoise/CMakeFiles/PerlinNoise_autogen.dir/build.make Core/PerlinNoise/CMakeFiles/PerlinNoise_autogen.dir/build
.PHONY : PerlinNoise_autogen/fast

#=============================================================================
# Target rules for targets named GameGUI

# Build rule for target.
GameGUI: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 GameGUI
.PHONY : GameGUI

# fast build rule for target.
GameGUI/fast:
	$(MAKE) $(MAKESILENT) -f GUI/CMakeFiles/GameGUI.dir/build.make GUI/CMakeFiles/GameGUI.dir/build
.PHONY : GameGUI/fast

#=============================================================================
# Target rules for targets named GameGUITest

# Build rule for target.
GameGUITest: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 GameGUITest
.PHONY : GameGUITest

# fast build rule for target.
GameGUITest/fast:
	$(MAKE) $(MAKESILENT) -f GUI/CMakeFiles/GameGUITest.dir/build.make GUI/CMakeFiles/GameGUITest.dir/build
.PHONY : GameGUITest/fast

#=============================================================================
# Target rules for targets named GameGUI_autogen

# Build rule for target.
GameGUI_autogen: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 GameGUI_autogen
.PHONY : GameGUI_autogen

# fast build rule for target.
GameGUI_autogen/fast:
	$(MAKE) $(MAKESILENT) -f GUI/CMakeFiles/GameGUI_autogen.dir/build.make GUI/CMakeFiles/GameGUI_autogen.dir/build
.PHONY : GameGUI_autogen/fast

#=============================================================================
# Target rules for targets named GameGUITest_autogen

# Build rule for target.
GameGUITest_autogen: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 GameGUITest_autogen
.PHONY : GameGUITest_autogen

# fast build rule for target.
GameGUITest_autogen/fast:
	$(MAKE) $(MAKESILENT) -f GUI/CMakeFiles/GameGUITest_autogen.dir/build.make GUI/CMakeFiles/GameGUITest_autogen.dir/build
.PHONY : GameGUITest_autogen/fast

main.o: main.cpp.o
.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i
.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s
.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... GameCoreTest_autogen"
	@echo "... GameCore_autogen"
	@echo "... GameGUITest_autogen"
	@echo "... GameGUI_autogen"
	@echo "... PathFinder_autogen"
	@echo "... PerlinNoise_autogen"
	@echo "... Game"
	@echo "... GameCore"
	@echo "... GameCoreTest"
	@echo "... GameGUI"
	@echo "... GameGUITest"
	@echo "... PathFinder"
	@echo "... PerlinNoise"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

