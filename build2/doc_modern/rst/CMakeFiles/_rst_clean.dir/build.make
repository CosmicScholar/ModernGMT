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

# Utility rule file for _rst_clean.

# Include the progress variables for this target.
include doc_modern/rst/CMakeFiles/_rst_clean.dir/progress.make

doc_modern/rst/CMakeFiles/_rst_clean:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/MyData/Research/3-CodeProject/ModernGMT/gmt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Removing rst tree"
	cd /MyData/Research/3-CodeProject/ModernGMT/gmt/build/doc_modern/rst && /usr/local/Cellar/cmake/3.14.3/bin/cmake -E remove_directory /MyData/Research/3-CodeProject/ModernGMT/gmt/build/doc_modern/rst/_doctrees
	cd /MyData/Research/3-CodeProject/ModernGMT/gmt/build/doc_modern/rst && /usr/local/Cellar/cmake/3.14.3/bin/cmake -E remove_directory /MyData/Research/3-CodeProject/ModernGMT/gmt/build/doc_modern/rst/_source
	cd /MyData/Research/3-CodeProject/ModernGMT/gmt/build/doc_modern/rst && /usr/local/Cellar/cmake/3.14.3/bin/cmake -E remove_directory /MyData/Research/3-CodeProject/ModernGMT/gmt/build/doc_modern/rst/_themes
	cd /MyData/Research/3-CodeProject/ModernGMT/gmt/build/doc_modern/rst && /usr/local/Cellar/cmake/3.14.3/bin/cmake -E remove_directory /MyData/Research/3-CodeProject/ModernGMT/gmt/build/doc_modern/rst/html
	cd /MyData/Research/3-CodeProject/ModernGMT/gmt/build/doc_modern/rst && /usr/local/Cellar/cmake/3.14.3/bin/cmake -E remove_directory /MyData/Research/3-CodeProject/ModernGMT/gmt/build/doc_modern/rst/latex
	cd /MyData/Research/3-CodeProject/ModernGMT/gmt/build/doc_modern/rst && /usr/local/Cellar/cmake/3.14.3/bin/cmake -E remove_directory /MyData/Research/3-CodeProject/ModernGMT/gmt/build/doc_modern/rst/man

_rst_clean: doc_modern/rst/CMakeFiles/_rst_clean
_rst_clean: doc_modern/rst/CMakeFiles/_rst_clean.dir/build.make

.PHONY : _rst_clean

# Rule to build all files generated by this target.
doc_modern/rst/CMakeFiles/_rst_clean.dir/build: _rst_clean

.PHONY : doc_modern/rst/CMakeFiles/_rst_clean.dir/build

doc_modern/rst/CMakeFiles/_rst_clean.dir/clean:
	cd /MyData/Research/3-CodeProject/ModernGMT/gmt/build/doc_modern/rst && $(CMAKE_COMMAND) -P CMakeFiles/_rst_clean.dir/cmake_clean.cmake
.PHONY : doc_modern/rst/CMakeFiles/_rst_clean.dir/clean

doc_modern/rst/CMakeFiles/_rst_clean.dir/depend:
	cd /MyData/Research/3-CodeProject/ModernGMT/gmt/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /MyData/Research/3-CodeProject/ModernGMT/gmt /MyData/Research/3-CodeProject/ModernGMT/gmt/doc_modern/rst /MyData/Research/3-CodeProject/ModernGMT/gmt/build /MyData/Research/3-CodeProject/ModernGMT/gmt/build/doc_modern/rst /MyData/Research/3-CodeProject/ModernGMT/gmt/build/doc_modern/rst/CMakeFiles/_rst_clean.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : doc_modern/rst/CMakeFiles/_rst_clean.dir/depend
