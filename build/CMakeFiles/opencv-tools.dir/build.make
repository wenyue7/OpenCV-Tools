# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/administrator/Projects/OpenCV-Tools

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/administrator/Projects/OpenCV-Tools/build

# Include any dependencies generated for this target.
include CMakeFiles/opencv-tools.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/opencv-tools.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/opencv-tools.dir/flags.make

CMakeFiles/opencv-tools.dir/src/main.cpp.o: CMakeFiles/opencv-tools.dir/flags.make
CMakeFiles/opencv-tools.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/administrator/Projects/OpenCV-Tools/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/opencv-tools.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencv-tools.dir/src/main.cpp.o -c /home/administrator/Projects/OpenCV-Tools/src/main.cpp

CMakeFiles/opencv-tools.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv-tools.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/administrator/Projects/OpenCV-Tools/src/main.cpp > CMakeFiles/opencv-tools.dir/src/main.cpp.i

CMakeFiles/opencv-tools.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv-tools.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/administrator/Projects/OpenCV-Tools/src/main.cpp -o CMakeFiles/opencv-tools.dir/src/main.cpp.s

CMakeFiles/opencv-tools.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/opencv-tools.dir/src/main.cpp.o.requires

CMakeFiles/opencv-tools.dir/src/main.cpp.o.provides: CMakeFiles/opencv-tools.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/opencv-tools.dir/build.make CMakeFiles/opencv-tools.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/opencv-tools.dir/src/main.cpp.o.provides

CMakeFiles/opencv-tools.dir/src/main.cpp.o.provides.build: CMakeFiles/opencv-tools.dir/src/main.cpp.o


CMakeFiles/opencv-tools.dir/src/custom_func.cpp.o: CMakeFiles/opencv-tools.dir/flags.make
CMakeFiles/opencv-tools.dir/src/custom_func.cpp.o: ../src/custom_func.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/administrator/Projects/OpenCV-Tools/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/opencv-tools.dir/src/custom_func.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencv-tools.dir/src/custom_func.cpp.o -c /home/administrator/Projects/OpenCV-Tools/src/custom_func.cpp

CMakeFiles/opencv-tools.dir/src/custom_func.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv-tools.dir/src/custom_func.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/administrator/Projects/OpenCV-Tools/src/custom_func.cpp > CMakeFiles/opencv-tools.dir/src/custom_func.cpp.i

CMakeFiles/opencv-tools.dir/src/custom_func.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv-tools.dir/src/custom_func.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/administrator/Projects/OpenCV-Tools/src/custom_func.cpp -o CMakeFiles/opencv-tools.dir/src/custom_func.cpp.s

CMakeFiles/opencv-tools.dir/src/custom_func.cpp.o.requires:

.PHONY : CMakeFiles/opencv-tools.dir/src/custom_func.cpp.o.requires

CMakeFiles/opencv-tools.dir/src/custom_func.cpp.o.provides: CMakeFiles/opencv-tools.dir/src/custom_func.cpp.o.requires
	$(MAKE) -f CMakeFiles/opencv-tools.dir/build.make CMakeFiles/opencv-tools.dir/src/custom_func.cpp.o.provides.build
.PHONY : CMakeFiles/opencv-tools.dir/src/custom_func.cpp.o.provides

CMakeFiles/opencv-tools.dir/src/custom_func.cpp.o.provides.build: CMakeFiles/opencv-tools.dir/src/custom_func.cpp.o


# Object files for target opencv-tools
opencv__tools_OBJECTS = \
"CMakeFiles/opencv-tools.dir/src/main.cpp.o" \
"CMakeFiles/opencv-tools.dir/src/custom_func.cpp.o"

# External object files for target opencv-tools
opencv__tools_EXTERNAL_OBJECTS =

opencv-tools: CMakeFiles/opencv-tools.dir/src/main.cpp.o
opencv-tools: CMakeFiles/opencv-tools.dir/src/custom_func.cpp.o
opencv-tools: CMakeFiles/opencv-tools.dir/build.make
opencv-tools: /usr/local/lib/libopencv_dnn.so.3.3.0
opencv-tools: /usr/local/lib/libopencv_ml.so.3.3.0
opencv-tools: /usr/local/lib/libopencv_objdetect.so.3.3.0
opencv-tools: /usr/local/lib/libopencv_shape.so.3.3.0
opencv-tools: /usr/local/lib/libopencv_stitching.so.3.3.0
opencv-tools: /usr/local/lib/libopencv_superres.so.3.3.0
opencv-tools: /usr/local/lib/libopencv_videostab.so.3.3.0
opencv-tools: /usr/local/lib/libopencv_calib3d.so.3.3.0
opencv-tools: /usr/local/lib/libopencv_features2d.so.3.3.0
opencv-tools: /usr/local/lib/libopencv_flann.so.3.3.0
opencv-tools: /usr/local/lib/libopencv_highgui.so.3.3.0
opencv-tools: /usr/local/lib/libopencv_photo.so.3.3.0
opencv-tools: /usr/local/lib/libopencv_video.so.3.3.0
opencv-tools: /usr/local/lib/libopencv_videoio.so.3.3.0
opencv-tools: /usr/local/lib/libopencv_imgcodecs.so.3.3.0
opencv-tools: /usr/local/lib/libopencv_imgproc.so.3.3.0
opencv-tools: /usr/local/lib/libopencv_core.so.3.3.0
opencv-tools: CMakeFiles/opencv-tools.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/administrator/Projects/OpenCV-Tools/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable opencv-tools"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv-tools.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/opencv-tools.dir/build: opencv-tools

.PHONY : CMakeFiles/opencv-tools.dir/build

CMakeFiles/opencv-tools.dir/requires: CMakeFiles/opencv-tools.dir/src/main.cpp.o.requires
CMakeFiles/opencv-tools.dir/requires: CMakeFiles/opencv-tools.dir/src/custom_func.cpp.o.requires

.PHONY : CMakeFiles/opencv-tools.dir/requires

CMakeFiles/opencv-tools.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/opencv-tools.dir/cmake_clean.cmake
.PHONY : CMakeFiles/opencv-tools.dir/clean

CMakeFiles/opencv-tools.dir/depend:
	cd /home/administrator/Projects/OpenCV-Tools/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/administrator/Projects/OpenCV-Tools /home/administrator/Projects/OpenCV-Tools /home/administrator/Projects/OpenCV-Tools/build /home/administrator/Projects/OpenCV-Tools/build /home/administrator/Projects/OpenCV-Tools/build/CMakeFiles/opencv-tools.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/opencv-tools.dir/depend

