# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\kivan\OneDrive\Documents\GitHub\yilanoyunu

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kivan\OneDrive\Documents\GitHub\yilanoyunu\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/yilanoyunu.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/yilanoyunu.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/yilanoyunu.dir/flags.make

CMakeFiles/yilanoyunu.dir/main.c.obj: CMakeFiles/yilanoyunu.dir/flags.make
CMakeFiles/yilanoyunu.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kivan\OneDrive\Documents\GitHub\yilanoyunu\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/yilanoyunu.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\yilanoyunu.dir\main.c.obj   -c C:\Users\kivan\OneDrive\Documents\GitHub\yilanoyunu\main.c

CMakeFiles/yilanoyunu.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/yilanoyunu.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\kivan\OneDrive\Documents\GitHub\yilanoyunu\main.c > CMakeFiles\yilanoyunu.dir\main.c.i

CMakeFiles/yilanoyunu.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/yilanoyunu.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\kivan\OneDrive\Documents\GitHub\yilanoyunu\main.c -o CMakeFiles\yilanoyunu.dir\main.c.s

CMakeFiles/yilanoyunu.dir/main.c.obj.requires:

.PHONY : CMakeFiles/yilanoyunu.dir/main.c.obj.requires

CMakeFiles/yilanoyunu.dir/main.c.obj.provides: CMakeFiles/yilanoyunu.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\yilanoyunu.dir\build.make CMakeFiles/yilanoyunu.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/yilanoyunu.dir/main.c.obj.provides

CMakeFiles/yilanoyunu.dir/main.c.obj.provides.build: CMakeFiles/yilanoyunu.dir/main.c.obj


# Object files for target yilanoyunu
yilanoyunu_OBJECTS = \
"CMakeFiles/yilanoyunu.dir/main.c.obj"

# External object files for target yilanoyunu
yilanoyunu_EXTERNAL_OBJECTS =

yilanoyunu.exe: CMakeFiles/yilanoyunu.dir/main.c.obj
yilanoyunu.exe: CMakeFiles/yilanoyunu.dir/build.make
yilanoyunu.exe: CMakeFiles/yilanoyunu.dir/linklibs.rsp
yilanoyunu.exe: CMakeFiles/yilanoyunu.dir/objects1.rsp
yilanoyunu.exe: CMakeFiles/yilanoyunu.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kivan\OneDrive\Documents\GitHub\yilanoyunu\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable yilanoyunu.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\yilanoyunu.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/yilanoyunu.dir/build: yilanoyunu.exe

.PHONY : CMakeFiles/yilanoyunu.dir/build

CMakeFiles/yilanoyunu.dir/requires: CMakeFiles/yilanoyunu.dir/main.c.obj.requires

.PHONY : CMakeFiles/yilanoyunu.dir/requires

CMakeFiles/yilanoyunu.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\yilanoyunu.dir\cmake_clean.cmake
.PHONY : CMakeFiles/yilanoyunu.dir/clean

CMakeFiles/yilanoyunu.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kivan\OneDrive\Documents\GitHub\yilanoyunu C:\Users\kivan\OneDrive\Documents\GitHub\yilanoyunu C:\Users\kivan\OneDrive\Documents\GitHub\yilanoyunu\cmake-build-debug C:\Users\kivan\OneDrive\Documents\GitHub\yilanoyunu\cmake-build-debug C:\Users\kivan\OneDrive\Documents\GitHub\yilanoyunu\cmake-build-debug\CMakeFiles\yilanoyunu.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/yilanoyunu.dir/depend

