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
CMAKE_SOURCE_DIR = /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build

# Include any dependencies generated for this target.
include src/CMakeFiles/ODE_solver_lib.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/ODE_solver_lib.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/ODE_solver_lib.dir/flags.make

src/CMakeFiles/ODE_solver_lib.dir/base_ode.cpp.o: src/CMakeFiles/ODE_solver_lib.dir/flags.make
src/CMakeFiles/ODE_solver_lib.dir/base_ode.cpp.o: ../src/base_ode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/ODE_solver_lib.dir/base_ode.cpp.o"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ODE_solver_lib.dir/base_ode.cpp.o -c /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/base_ode.cpp

src/CMakeFiles/ODE_solver_lib.dir/base_ode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ODE_solver_lib.dir/base_ode.cpp.i"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/base_ode.cpp > CMakeFiles/ODE_solver_lib.dir/base_ode.cpp.i

src/CMakeFiles/ODE_solver_lib.dir/base_ode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ODE_solver_lib.dir/base_ode.cpp.s"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/base_ode.cpp -o CMakeFiles/ODE_solver_lib.dir/base_ode.cpp.s

src/CMakeFiles/ODE_solver_lib.dir/exp_euler.cpp.o: src/CMakeFiles/ODE_solver_lib.dir/flags.make
src/CMakeFiles/ODE_solver_lib.dir/exp_euler.cpp.o: ../src/exp_euler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/ODE_solver_lib.dir/exp_euler.cpp.o"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ODE_solver_lib.dir/exp_euler.cpp.o -c /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/exp_euler.cpp

src/CMakeFiles/ODE_solver_lib.dir/exp_euler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ODE_solver_lib.dir/exp_euler.cpp.i"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/exp_euler.cpp > CMakeFiles/ODE_solver_lib.dir/exp_euler.cpp.i

src/CMakeFiles/ODE_solver_lib.dir/exp_euler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ODE_solver_lib.dir/exp_euler.cpp.s"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/exp_euler.cpp -o CMakeFiles/ODE_solver_lib.dir/exp_euler.cpp.s

src/CMakeFiles/ODE_solver_lib.dir/imp_euler.cpp.o: src/CMakeFiles/ODE_solver_lib.dir/flags.make
src/CMakeFiles/ODE_solver_lib.dir/imp_euler.cpp.o: ../src/imp_euler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/ODE_solver_lib.dir/imp_euler.cpp.o"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ODE_solver_lib.dir/imp_euler.cpp.o -c /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/imp_euler.cpp

src/CMakeFiles/ODE_solver_lib.dir/imp_euler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ODE_solver_lib.dir/imp_euler.cpp.i"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/imp_euler.cpp > CMakeFiles/ODE_solver_lib.dir/imp_euler.cpp.i

src/CMakeFiles/ODE_solver_lib.dir/imp_euler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ODE_solver_lib.dir/imp_euler.cpp.s"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/imp_euler.cpp -o CMakeFiles/ODE_solver_lib.dir/imp_euler.cpp.s

src/CMakeFiles/ODE_solver_lib.dir/main.cpp.o: src/CMakeFiles/ODE_solver_lib.dir/flags.make
src/CMakeFiles/ODE_solver_lib.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/ODE_solver_lib.dir/main.cpp.o"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ODE_solver_lib.dir/main.cpp.o -c /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/main.cpp

src/CMakeFiles/ODE_solver_lib.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ODE_solver_lib.dir/main.cpp.i"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/main.cpp > CMakeFiles/ODE_solver_lib.dir/main.cpp.i

src/CMakeFiles/ODE_solver_lib.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ODE_solver_lib.dir/main.cpp.s"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/main.cpp -o CMakeFiles/ODE_solver_lib.dir/main.cpp.s

src/CMakeFiles/ODE_solver_lib.dir/rhs_func.cpp.o: src/CMakeFiles/ODE_solver_lib.dir/flags.make
src/CMakeFiles/ODE_solver_lib.dir/rhs_func.cpp.o: ../src/rhs_func.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/ODE_solver_lib.dir/rhs_func.cpp.o"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ODE_solver_lib.dir/rhs_func.cpp.o -c /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/rhs_func.cpp

src/CMakeFiles/ODE_solver_lib.dir/rhs_func.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ODE_solver_lib.dir/rhs_func.cpp.i"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/rhs_func.cpp > CMakeFiles/ODE_solver_lib.dir/rhs_func.cpp.i

src/CMakeFiles/ODE_solver_lib.dir/rhs_func.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ODE_solver_lib.dir/rhs_func.cpp.s"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/rhs_func.cpp -o CMakeFiles/ODE_solver_lib.dir/rhs_func.cpp.s

src/CMakeFiles/ODE_solver_lib.dir/rk2.cpp.o: src/CMakeFiles/ODE_solver_lib.dir/flags.make
src/CMakeFiles/ODE_solver_lib.dir/rk2.cpp.o: ../src/rk2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/ODE_solver_lib.dir/rk2.cpp.o"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ODE_solver_lib.dir/rk2.cpp.o -c /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/rk2.cpp

src/CMakeFiles/ODE_solver_lib.dir/rk2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ODE_solver_lib.dir/rk2.cpp.i"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/rk2.cpp > CMakeFiles/ODE_solver_lib.dir/rk2.cpp.i

src/CMakeFiles/ODE_solver_lib.dir/rk2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ODE_solver_lib.dir/rk2.cpp.s"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/rk2.cpp -o CMakeFiles/ODE_solver_lib.dir/rk2.cpp.s

src/CMakeFiles/ODE_solver_lib.dir/rk4.cpp.o: src/CMakeFiles/ODE_solver_lib.dir/flags.make
src/CMakeFiles/ODE_solver_lib.dir/rk4.cpp.o: ../src/rk4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/ODE_solver_lib.dir/rk4.cpp.o"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ODE_solver_lib.dir/rk4.cpp.o -c /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/rk4.cpp

src/CMakeFiles/ODE_solver_lib.dir/rk4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ODE_solver_lib.dir/rk4.cpp.i"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/rk4.cpp > CMakeFiles/ODE_solver_lib.dir/rk4.cpp.i

src/CMakeFiles/ODE_solver_lib.dir/rk4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ODE_solver_lib.dir/rk4.cpp.s"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src/rk4.cpp -o CMakeFiles/ODE_solver_lib.dir/rk4.cpp.s

# Object files for target ODE_solver_lib
ODE_solver_lib_OBJECTS = \
"CMakeFiles/ODE_solver_lib.dir/base_ode.cpp.o" \
"CMakeFiles/ODE_solver_lib.dir/exp_euler.cpp.o" \
"CMakeFiles/ODE_solver_lib.dir/imp_euler.cpp.o" \
"CMakeFiles/ODE_solver_lib.dir/main.cpp.o" \
"CMakeFiles/ODE_solver_lib.dir/rhs_func.cpp.o" \
"CMakeFiles/ODE_solver_lib.dir/rk2.cpp.o" \
"CMakeFiles/ODE_solver_lib.dir/rk4.cpp.o"

# External object files for target ODE_solver_lib
ODE_solver_lib_EXTERNAL_OBJECTS =

src/libODE_solver_lib.a: src/CMakeFiles/ODE_solver_lib.dir/base_ode.cpp.o
src/libODE_solver_lib.a: src/CMakeFiles/ODE_solver_lib.dir/exp_euler.cpp.o
src/libODE_solver_lib.a: src/CMakeFiles/ODE_solver_lib.dir/imp_euler.cpp.o
src/libODE_solver_lib.a: src/CMakeFiles/ODE_solver_lib.dir/main.cpp.o
src/libODE_solver_lib.a: src/CMakeFiles/ODE_solver_lib.dir/rhs_func.cpp.o
src/libODE_solver_lib.a: src/CMakeFiles/ODE_solver_lib.dir/rk2.cpp.o
src/libODE_solver_lib.a: src/CMakeFiles/ODE_solver_lib.dir/rk4.cpp.o
src/libODE_solver_lib.a: src/CMakeFiles/ODE_solver_lib.dir/build.make
src/libODE_solver_lib.a: src/CMakeFiles/ODE_solver_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX static library libODE_solver_lib.a"
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && $(CMAKE_COMMAND) -P CMakeFiles/ODE_solver_lib.dir/cmake_clean_target.cmake
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ODE_solver_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/ODE_solver_lib.dir/build: src/libODE_solver_lib.a

.PHONY : src/CMakeFiles/ODE_solver_lib.dir/build

src/CMakeFiles/ODE_solver_lib.dir/clean:
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src && $(CMAKE_COMMAND) -P CMakeFiles/ODE_solver_lib.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/ODE_solver_lib.dir/clean

src/CMakeFiles/ODE_solver_lib.dir/depend:
	cd /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/src /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src /home/gaurav/Desktop/bonus_project/submission/group_bw_ode_solver/build/src/CMakeFiles/ODE_solver_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/ODE_solver_lib.dir/depend

