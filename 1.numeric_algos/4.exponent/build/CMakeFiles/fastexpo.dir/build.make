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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent/build

# Include any dependencies generated for this target.
include CMakeFiles/fastexpo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fastexpo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fastexpo.dir/flags.make

CMakeFiles/fastexpo.dir/src/fastExpo.cpp.o: CMakeFiles/fastexpo.dir/flags.make
CMakeFiles/fastexpo.dir/src/fastExpo.cpp.o: ../src/fastExpo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/fastexpo.dir/src/fastExpo.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fastexpo.dir/src/fastExpo.cpp.o -c /home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent/src/fastExpo.cpp

CMakeFiles/fastexpo.dir/src/fastExpo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fastexpo.dir/src/fastExpo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent/src/fastExpo.cpp > CMakeFiles/fastexpo.dir/src/fastExpo.cpp.i

CMakeFiles/fastexpo.dir/src/fastExpo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fastexpo.dir/src/fastExpo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent/src/fastExpo.cpp -o CMakeFiles/fastexpo.dir/src/fastExpo.cpp.s

CMakeFiles/fastexpo.dir/src/main.cpp.o: CMakeFiles/fastexpo.dir/flags.make
CMakeFiles/fastexpo.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/fastexpo.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fastexpo.dir/src/main.cpp.o -c /home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent/src/main.cpp

CMakeFiles/fastexpo.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fastexpo.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent/src/main.cpp > CMakeFiles/fastexpo.dir/src/main.cpp.i

CMakeFiles/fastexpo.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fastexpo.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent/src/main.cpp -o CMakeFiles/fastexpo.dir/src/main.cpp.s

# Object files for target fastexpo
fastexpo_OBJECTS = \
"CMakeFiles/fastexpo.dir/src/fastExpo.cpp.o" \
"CMakeFiles/fastexpo.dir/src/main.cpp.o"

# External object files for target fastexpo
fastexpo_EXTERNAL_OBJECTS =

fastexpo: CMakeFiles/fastexpo.dir/src/fastExpo.cpp.o
fastexpo: CMakeFiles/fastexpo.dir/src/main.cpp.o
fastexpo: CMakeFiles/fastexpo.dir/build.make
fastexpo: CMakeFiles/fastexpo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable fastexpo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fastexpo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fastexpo.dir/build: fastexpo

.PHONY : CMakeFiles/fastexpo.dir/build

CMakeFiles/fastexpo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fastexpo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fastexpo.dir/clean

CMakeFiles/fastexpo.dir/depend:
	cd /home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent /home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent /home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent/build /home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent/build /home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/1.numeric_algos/4.exponent/build/CMakeFiles/fastexpo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fastexpo.dir/depend
