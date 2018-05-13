# cmake needs this line
cmake_minimum_required(VERSION 2.8)

# Define project name
project(OpenCV-Tools)

#project隐式的定义了两个cmake 变量: _BINARY_DIR 以及_SOURCE_DIR ，这里就是OpenCV-Tools_BINARY_DIR 和OpenCV-Tools_SOURCE_DIR。同时cmake 系统也帮助我们预定义了PROJECT_BINARY_DIR 和PROJECT_SOURCE_DIR 变量，他们的值分别跟OpenCV-Tools_BINARY_DIR 与OpenCV-Tools_SOURCE_DIR 一致。
message(STATUS "This is PROJECT BINARY dir" ${PROJECT_BINARY_DIR})
message(STATUS "This is PROJECT SOURCE dir" ${PROJECT_SOURCE_DIR})
# Find OpenCV, you may need to set OpenCV_DIR variable
# to the absolute path to the directory containing OpenCVConfig.cmake file
# via the command line or GUI
find_package(OpenCV REQUIRED)

# If the package has been found, several variables will
# be set, you can find the full list with descriptions
# in the OpenCVConfig.cmake file.
# Print some message showing some of them
message(STATUS "OpenCV library status:")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")

if(CMAKE_VERSION VERSION_LESS "2.8.11")
  # Add OpenCV headers location to your include paths
  include_directories(${OpenCV_INCLUDE_DIRS})
endif()

# Declare the executable target built from your sources
set(OPENCVTOOLSSRC ./src/main.cpp ./src/custom_func.cpp)
add_executable(opencv-tools ${OPENCVTOOLSSRC})

# Include the head file directories
include_directories(./include)

# Link your application with OpenCV libraries
target_link_libraries(opencv-tools ${OpenCV_LIBS})
