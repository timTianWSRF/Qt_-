# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\QTtry\second

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\QTtry\second\cmake-build-debug

# Utility rule file for test_autogen.

# Include the progress variables for this target.
include CMakeFiles/test_autogen.dir/progress.make

CMakeFiles/test_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=D:\QTtry\second\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target test"
	"D:\CLion\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E cmake_autogen D:/QTtry/second/cmake-build-debug/CMakeFiles/test_autogen.dir/AutogenInfo.json Debug

test_autogen: CMakeFiles/test_autogen
test_autogen: CMakeFiles/test_autogen.dir/build.make

.PHONY : test_autogen

# Rule to build all files generated by this target.
CMakeFiles/test_autogen.dir/build: test_autogen

.PHONY : CMakeFiles/test_autogen.dir/build

CMakeFiles/test_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\test_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/test_autogen.dir/clean

CMakeFiles/test_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\QTtry\second D:\QTtry\second D:\QTtry\second\cmake-build-debug D:\QTtry\second\cmake-build-debug D:\QTtry\second\cmake-build-debug\CMakeFiles\test_autogen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_autogen.dir/depend
