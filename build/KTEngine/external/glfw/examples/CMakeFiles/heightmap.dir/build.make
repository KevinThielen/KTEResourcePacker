# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/kevin/Desktop/Projects/C++/KTEResourcePacker

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kevin/Desktop/Projects/C++/KTEResourcePacker/build

# Include any dependencies generated for this target.
include KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/depend.make

# Include the progress variables for this target.
include KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/progress.make

# Include the compile flags for this target's objects.
include KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/flags.make

KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/heightmap.c.o: KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/flags.make
KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/heightmap.c.o: /home/kevin/Desktop/Projects/C++/KTEngine/external/glfw/examples/heightmap.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kevin/Desktop/Projects/C++/KTEResourcePacker/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/heightmap.c.o"
	cd /home/kevin/Desktop/Projects/C++/KTEResourcePacker/build/KTEngine/external/glfw/examples && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/heightmap.dir/heightmap.c.o   -c /home/kevin/Desktop/Projects/C++/KTEngine/external/glfw/examples/heightmap.c

KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/heightmap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/heightmap.dir/heightmap.c.i"
	cd /home/kevin/Desktop/Projects/C++/KTEResourcePacker/build/KTEngine/external/glfw/examples && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/kevin/Desktop/Projects/C++/KTEngine/external/glfw/examples/heightmap.c > CMakeFiles/heightmap.dir/heightmap.c.i

KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/heightmap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/heightmap.dir/heightmap.c.s"
	cd /home/kevin/Desktop/Projects/C++/KTEResourcePacker/build/KTEngine/external/glfw/examples && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/kevin/Desktop/Projects/C++/KTEngine/external/glfw/examples/heightmap.c -o CMakeFiles/heightmap.dir/heightmap.c.s

KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/heightmap.c.o.requires:
.PHONY : KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/heightmap.c.o.requires

KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/heightmap.c.o.provides: KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/heightmap.c.o.requires
	$(MAKE) -f KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/build.make KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/heightmap.c.o.provides.build
.PHONY : KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/heightmap.c.o.provides

KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/heightmap.c.o.provides.build: KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/heightmap.c.o

KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/__/deps/getopt.c.o: KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/flags.make
KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/__/deps/getopt.c.o: /home/kevin/Desktop/Projects/C++/KTEngine/external/glfw/deps/getopt.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kevin/Desktop/Projects/C++/KTEResourcePacker/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/__/deps/getopt.c.o"
	cd /home/kevin/Desktop/Projects/C++/KTEResourcePacker/build/KTEngine/external/glfw/examples && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/heightmap.dir/__/deps/getopt.c.o   -c /home/kevin/Desktop/Projects/C++/KTEngine/external/glfw/deps/getopt.c

KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/__/deps/getopt.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/heightmap.dir/__/deps/getopt.c.i"
	cd /home/kevin/Desktop/Projects/C++/KTEResourcePacker/build/KTEngine/external/glfw/examples && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/kevin/Desktop/Projects/C++/KTEngine/external/glfw/deps/getopt.c > CMakeFiles/heightmap.dir/__/deps/getopt.c.i

KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/__/deps/getopt.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/heightmap.dir/__/deps/getopt.c.s"
	cd /home/kevin/Desktop/Projects/C++/KTEResourcePacker/build/KTEngine/external/glfw/examples && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/kevin/Desktop/Projects/C++/KTEngine/external/glfw/deps/getopt.c -o CMakeFiles/heightmap.dir/__/deps/getopt.c.s

KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/__/deps/getopt.c.o.requires:
.PHONY : KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/__/deps/getopt.c.o.requires

KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/__/deps/getopt.c.o.provides: KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/__/deps/getopt.c.o.requires
	$(MAKE) -f KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/build.make KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/__/deps/getopt.c.o.provides.build
.PHONY : KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/__/deps/getopt.c.o.provides

KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/__/deps/getopt.c.o.provides.build: KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/__/deps/getopt.c.o

# Object files for target heightmap
heightmap_OBJECTS = \
"CMakeFiles/heightmap.dir/heightmap.c.o" \
"CMakeFiles/heightmap.dir/__/deps/getopt.c.o"

# External object files for target heightmap
heightmap_EXTERNAL_OBJECTS =

/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/heightmap.c.o
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/__/deps/getopt.c.o
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/build.make
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: /home/kevin/Desktop/Projects/C++/KTEngine/build/libglfw3.a
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: /usr/lib/x86_64-linux-gnu/libGLU.so
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: /usr/lib/x86_64-linux-gnu/libX11.so
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: /usr/lib/x86_64-linux-gnu/librt.so
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: /usr/lib/x86_64-linux-gnu/libXrandr.so
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: /usr/lib/x86_64-linux-gnu/libXi.so
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: /usr/lib/x86_64-linux-gnu/libXxf86vm.so
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: /usr/lib/x86_64-linux-gnu/librt.so
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: /usr/lib/x86_64-linux-gnu/libm.so
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: /usr/lib/x86_64-linux-gnu/libGL.so
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: /usr/lib/x86_64-linux-gnu/libXrandr.so
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: /usr/lib/x86_64-linux-gnu/libXi.so
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: /usr/lib/x86_64-linux-gnu/libXxf86vm.so
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: /usr/lib/x86_64-linux-gnu/libm.so
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: /usr/lib/x86_64-linux-gnu/libGL.so
/home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap: KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable /home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap"
	cd /home/kevin/Desktop/Projects/C++/KTEResourcePacker/build/KTEngine/external/glfw/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/heightmap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/build: /home/kevin/Desktop/Projects/C++/KTEngine/build/heightmap
.PHONY : KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/build

KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/requires: KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/heightmap.c.o.requires
KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/requires: KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/__/deps/getopt.c.o.requires
.PHONY : KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/requires

KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/clean:
	cd /home/kevin/Desktop/Projects/C++/KTEResourcePacker/build/KTEngine/external/glfw/examples && $(CMAKE_COMMAND) -P CMakeFiles/heightmap.dir/cmake_clean.cmake
.PHONY : KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/clean

KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/depend:
	cd /home/kevin/Desktop/Projects/C++/KTEResourcePacker/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kevin/Desktop/Projects/C++/KTEResourcePacker /home/kevin/Desktop/Projects/C++/KTEngine/external/glfw/examples /home/kevin/Desktop/Projects/C++/KTEResourcePacker/build /home/kevin/Desktop/Projects/C++/KTEResourcePacker/build/KTEngine/external/glfw/examples /home/kevin/Desktop/Projects/C++/KTEResourcePacker/build/KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : KTEngine/external/glfw/examples/CMakeFiles/heightmap.dir/depend
