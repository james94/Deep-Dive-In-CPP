# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/james/Development/GitHub/james94/Deep-Dive-In-CPP/features/conditional-statements/check-if-leap-year

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/james/Development/GitHub/james94/Deep-Dive-In-CPP/features/conditional-statements/check-if-leap-year/cmake-build-debug-wsl

# Include any dependencies generated for this target.
include CMakeFiles/check_if_leap_year.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/check_if_leap_year.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/check_if_leap_year.dir/flags.make

CMakeFiles/check_if_leap_year.dir/main.cpp.o: CMakeFiles/check_if_leap_year.dir/flags.make
CMakeFiles/check_if_leap_year.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/james/Development/GitHub/james94/Deep-Dive-In-CPP/features/conditional-statements/check-if-leap-year/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/check_if_leap_year.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/check_if_leap_year.dir/main.cpp.o -c /mnt/c/Users/james/Development/GitHub/james94/Deep-Dive-In-CPP/features/conditional-statements/check-if-leap-year/main.cpp

CMakeFiles/check_if_leap_year.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/check_if_leap_year.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/james/Development/GitHub/james94/Deep-Dive-In-CPP/features/conditional-statements/check-if-leap-year/main.cpp > CMakeFiles/check_if_leap_year.dir/main.cpp.i

CMakeFiles/check_if_leap_year.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/check_if_leap_year.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/james/Development/GitHub/james94/Deep-Dive-In-CPP/features/conditional-statements/check-if-leap-year/main.cpp -o CMakeFiles/check_if_leap_year.dir/main.cpp.s

# Object files for target check_if_leap_year
check_if_leap_year_OBJECTS = \
"CMakeFiles/check_if_leap_year.dir/main.cpp.o"

# External object files for target check_if_leap_year
check_if_leap_year_EXTERNAL_OBJECTS =

check_if_leap_year: CMakeFiles/check_if_leap_year.dir/main.cpp.o
check_if_leap_year: CMakeFiles/check_if_leap_year.dir/build.make
check_if_leap_year: CMakeFiles/check_if_leap_year.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/james/Development/GitHub/james94/Deep-Dive-In-CPP/features/conditional-statements/check-if-leap-year/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable check_if_leap_year"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/check_if_leap_year.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/check_if_leap_year.dir/build: check_if_leap_year

.PHONY : CMakeFiles/check_if_leap_year.dir/build

CMakeFiles/check_if_leap_year.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/check_if_leap_year.dir/cmake_clean.cmake
.PHONY : CMakeFiles/check_if_leap_year.dir/clean

CMakeFiles/check_if_leap_year.dir/depend:
	cd /mnt/c/Users/james/Development/GitHub/james94/Deep-Dive-In-CPP/features/conditional-statements/check-if-leap-year/cmake-build-debug-wsl && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/james/Development/GitHub/james94/Deep-Dive-In-CPP/features/conditional-statements/check-if-leap-year /mnt/c/Users/james/Development/GitHub/james94/Deep-Dive-In-CPP/features/conditional-statements/check-if-leap-year /mnt/c/Users/james/Development/GitHub/james94/Deep-Dive-In-CPP/features/conditional-statements/check-if-leap-year/cmake-build-debug-wsl /mnt/c/Users/james/Development/GitHub/james94/Deep-Dive-In-CPP/features/conditional-statements/check-if-leap-year/cmake-build-debug-wsl /mnt/c/Users/james/Development/GitHub/james94/Deep-Dive-In-CPP/features/conditional-statements/check-if-leap-year/cmake-build-debug-wsl/CMakeFiles/check_if_leap_year.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/check_if_leap_year.dir/depend
