# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/eric/下载/clion-2018.2.6/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/eric/下载/clion-2018.2.6/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/eric/CLionProjects/STL/test_queue

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eric/CLionProjects/STL/test_queue/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test_queue.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_queue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_queue.dir/flags.make

CMakeFiles/test_queue.dir/main.cpp.o: CMakeFiles/test_queue.dir/flags.make
CMakeFiles/test_queue.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/CLionProjects/STL/test_queue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_queue.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_queue.dir/main.cpp.o -c /home/eric/CLionProjects/STL/test_queue/main.cpp

CMakeFiles/test_queue.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_queue.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eric/CLionProjects/STL/test_queue/main.cpp > CMakeFiles/test_queue.dir/main.cpp.i

CMakeFiles/test_queue.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_queue.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eric/CLionProjects/STL/test_queue/main.cpp -o CMakeFiles/test_queue.dir/main.cpp.s

# Object files for target test_queue
test_queue_OBJECTS = \
"CMakeFiles/test_queue.dir/main.cpp.o"

# External object files for target test_queue
test_queue_EXTERNAL_OBJECTS =

test_queue: CMakeFiles/test_queue.dir/main.cpp.o
test_queue: CMakeFiles/test_queue.dir/build.make
test_queue: CMakeFiles/test_queue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eric/CLionProjects/STL/test_queue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_queue"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_queue.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_queue.dir/build: test_queue

.PHONY : CMakeFiles/test_queue.dir/build

CMakeFiles/test_queue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_queue.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_queue.dir/clean

CMakeFiles/test_queue.dir/depend:
	cd /home/eric/CLionProjects/STL/test_queue/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eric/CLionProjects/STL/test_queue /home/eric/CLionProjects/STL/test_queue /home/eric/CLionProjects/STL/test_queue/cmake-build-debug /home/eric/CLionProjects/STL/test_queue/cmake-build-debug /home/eric/CLionProjects/STL/test_queue/cmake-build-debug/CMakeFiles/test_queue.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_queue.dir/depend
