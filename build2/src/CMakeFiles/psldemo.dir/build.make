# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.14.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.14.3/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /MyData/Research/3-CodeProject/ModernGMT/gmt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /MyData/Research/3-CodeProject/ModernGMT/gmt/build

# Include any dependencies generated for this target.
include src/CMakeFiles/psldemo.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/psldemo.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/psldemo.dir/flags.make

src/CMakeFiles/psldemo.dir/psldemo.c.o: src/CMakeFiles/psldemo.dir/flags.make
src/CMakeFiles/psldemo.dir/psldemo.c.o: ../src/psldemo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/MyData/Research/3-CodeProject/ModernGMT/gmt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/psldemo.dir/psldemo.c.o"
	cd /MyData/Research/3-CodeProject/ModernGMT/gmt/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/psldemo.dir/psldemo.c.o   -c /MyData/Research/3-CodeProject/ModernGMT/gmt/src/psldemo.c

src/CMakeFiles/psldemo.dir/psldemo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/psldemo.dir/psldemo.c.i"
	cd /MyData/Research/3-CodeProject/ModernGMT/gmt/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /MyData/Research/3-CodeProject/ModernGMT/gmt/src/psldemo.c > CMakeFiles/psldemo.dir/psldemo.c.i

src/CMakeFiles/psldemo.dir/psldemo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/psldemo.dir/psldemo.c.s"
	cd /MyData/Research/3-CodeProject/ModernGMT/gmt/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /MyData/Research/3-CodeProject/ModernGMT/gmt/src/psldemo.c -o CMakeFiles/psldemo.dir/psldemo.c.s

# Object files for target psldemo
psldemo_OBJECTS = \
"CMakeFiles/psldemo.dir/psldemo.c.o"

# External object files for target psldemo
psldemo_EXTERNAL_OBJECTS =

src/psldemo: src/CMakeFiles/psldemo.dir/psldemo.c.o
src/psldemo: src/CMakeFiles/psldemo.dir/build.make
src/psldemo: src/libpostscriptlight.6.0.0.dylib
src/psldemo: /usr/lib/libz.dylib
src/psldemo: src/CMakeFiles/psldemo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/MyData/Research/3-CodeProject/ModernGMT/gmt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable psldemo"
	cd /MyData/Research/3-CodeProject/ModernGMT/gmt/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/psldemo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/psldemo.dir/build: src/psldemo

.PHONY : src/CMakeFiles/psldemo.dir/build

src/CMakeFiles/psldemo.dir/clean:
	cd /MyData/Research/3-CodeProject/ModernGMT/gmt/build/src && $(CMAKE_COMMAND) -P CMakeFiles/psldemo.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/psldemo.dir/clean

src/CMakeFiles/psldemo.dir/depend:
	cd /MyData/Research/3-CodeProject/ModernGMT/gmt/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /MyData/Research/3-CodeProject/ModernGMT/gmt /MyData/Research/3-CodeProject/ModernGMT/gmt/src /MyData/Research/3-CodeProject/ModernGMT/gmt/build /MyData/Research/3-CodeProject/ModernGMT/gmt/build/src /MyData/Research/3-CodeProject/ModernGMT/gmt/build/src/CMakeFiles/psldemo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/psldemo.dir/depend
