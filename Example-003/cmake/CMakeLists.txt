##################################################################################
#
# Examples in the C++ language (the test 'Example-003')
#
# GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
#
# David Canino, December 2016
#
# CMakeLists.txt - the CMake directives for building the test 'Example-003'
##################################################################################

cmake_minimum_required(VERSION 2.8.6 FATAL_ERROR)
project(Example-003 LANGUAGES CXX)
if (APPLE OR CMAKE_HOST_APPLE)
	add_executable(Example-003 ../src/main.cpp)
elseif (UNIX OR CMAKE_HOST_UNIX)
	add_executable(Example-003 ../src/main.cpp)
elseif (WIN32 OR CMAKE_HOST_WIN32)
	add_executable(Example-003 ../src/main.cpp)
else ()
	message(FATAL_ERROR "The current platform is not supported")
endif ()
