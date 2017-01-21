##################################################################################
#
# Examples in the C++ language (the test 'Example-080’)
#
# GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
#
# David Canino, January 2017
#
# CMakeLists.txt - the CMake directives for building the test 'Example-080’
##################################################################################

cmake_minimum_required(VERSION 2.8.6 FATAL_ERROR)
project(Example-080 LANGUAGES CXX)
if (APPLE OR CMAKE_HOST_APPLE)
	include_directories(../include)
	add_executable(Example-080 ../src/main.cpp ../src/movie.cpp)
elseif (UNIX OR CMAKE_HOST_UNIX)
	include_directories(../include)
	add_executable(Example-080 ../src/main.cpp ../src/movie.cpp)
elseif (WIN32 OR CMAKE_HOST_WIN32)
	include_directories(../include)
	add_executable(Example-080 ../src/main.cpp ../src/movie.cpp)
else ()
	message(FATAL_ERROR "The current platform is not supported")
endif ()
