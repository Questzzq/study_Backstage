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
CMAKE_SOURCE_DIR = /home/eric/CLionProjects/STL/copy_Creat_Function

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eric/CLionProjects/STL/copy_Creat_Function/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/copy_Creat_Function.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/copy_Creat_Function.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/copy_Creat_Function.dir/flags.make

CMakeFiles/copy_Creat_Function.dir/main.cpp.o: CMakeFiles/copy_Creat_Function.dir/flags.make
CMakeFiles/copy_Creat_Function.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/CLionProjects/STL/copy_Creat_Function/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/copy_Creat_Function.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/copy_Creat_Function.dir/main.cpp.o -c /home/eric/CLionProjects/STL/copy_Creat_Function/main.cpp

CMakeFiles/copy_Creat_Function.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/copy_Creat_Function.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eric/CLionProjects/STL/copy_Creat_Function/main.cpp > CMakeFiles/copy_Creat_Function.dir/main.cpp.i

CMakeFiles/copy_Creat_Function.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/copy_Creat_Function.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eric/CLionProjects/STL/copy_Creat_Function/main.cpp -o CMakeFiles/copy_Creat_Function.dir/main.cpp.s

# Object files for target copy_Creat_Function
copy_Creat_Function_OBJECTS = \
"CMakeFiles/copy_Creat_Function.dir/main.cpp.o"

# External object files for target copy_Creat_Function
copy_Creat_Function_EXTERNAL_OBJECTS =

copy_Creat_Function: CMakeFiles/copy_Creat_Function.dir/main.cpp.o
copy_Creat_Function: CMakeFiles/copy_Creat_Function.dir/build.make
copy_Creat_Function: CMakeFiles/copy_Creat_Function.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eric/CLionProjects/STL/copy_Creat_Function/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable copy_Creat_Function"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/copy_Creat_Function.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/copy_Creat_Function.dir/build: copy_Creat_Function

.PHONY : CMakeFiles/copy_Creat_Function.dir/build

CMakeFiles/copy_Creat_Function.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/copy_Creat_Function.dir/cmake_clean.cmake
.PHONY : CMakeFiles/copy_Creat_Function.dir/clean

CMakeFiles/copy_Creat_Function.dir/depend:
	cd /home/eric/CLionProjects/STL/copy_Creat_Function/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eric/CLionProjects/STL/copy_Creat_Function /home/eric/CLionProjects/STL/copy_Creat_Function /home/eric/CLionProjects/STL/copy_Creat_Function/cmake-build-debug /home/eric/CLionProjects/STL/copy_Creat_Function/cmake-build-debug /home/eric/CLionProjects/STL/copy_Creat_Function/cmake-build-debug/CMakeFiles/copy_Creat_Function.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/copy_Creat_Function.dir/depend
