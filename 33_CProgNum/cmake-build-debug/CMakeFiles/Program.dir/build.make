# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/jazermariesuarez/Google Drive/Project/3_CProgNumbers/CProgNum_33/Program"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/jazermariesuarez/Google Drive/Project/3_CProgNumbers/CProgNum_33/Program/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Program.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Program.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Program.dir/flags.make

CMakeFiles/Program.dir/main.c.o: CMakeFiles/Program.dir/flags.make
CMakeFiles/Program.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jazermariesuarez/Google Drive/Project/3_CProgNumbers/CProgNum_33/Program/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Program.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Program.dir/main.c.o   -c "/Users/jazermariesuarez/Google Drive/Project/3_CProgNumbers/CProgNum_33/Program/main.c"

CMakeFiles/Program.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Program.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/jazermariesuarez/Google Drive/Project/3_CProgNumbers/CProgNum_33/Program/main.c" > CMakeFiles/Program.dir/main.c.i

CMakeFiles/Program.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Program.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/jazermariesuarez/Google Drive/Project/3_CProgNumbers/CProgNum_33/Program/main.c" -o CMakeFiles/Program.dir/main.c.s

# Object files for target Program
Program_OBJECTS = \
"CMakeFiles/Program.dir/main.c.o"

# External object files for target Program
Program_EXTERNAL_OBJECTS =

Program: CMakeFiles/Program.dir/main.c.o
Program: CMakeFiles/Program.dir/build.make
Program: CMakeFiles/Program.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/jazermariesuarez/Google Drive/Project/3_CProgNumbers/CProgNum_33/Program/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Program"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Program.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Program.dir/build: Program

.PHONY : CMakeFiles/Program.dir/build

CMakeFiles/Program.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Program.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Program.dir/clean

CMakeFiles/Program.dir/depend:
	cd "/Users/jazermariesuarez/Google Drive/Project/3_CProgNumbers/CProgNum_33/Program/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/jazermariesuarez/Google Drive/Project/3_CProgNumbers/CProgNum_33/Program" "/Users/jazermariesuarez/Google Drive/Project/3_CProgNumbers/CProgNum_33/Program" "/Users/jazermariesuarez/Google Drive/Project/3_CProgNumbers/CProgNum_33/Program/cmake-build-debug" "/Users/jazermariesuarez/Google Drive/Project/3_CProgNumbers/CProgNum_33/Program/cmake-build-debug" "/Users/jazermariesuarez/Google Drive/Project/3_CProgNumbers/CProgNum_33/Program/cmake-build-debug/CMakeFiles/Program.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Program.dir/depend

