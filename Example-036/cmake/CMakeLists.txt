##################################################################################
#
# Examples in the C++ language (the test 'Example-036’)
#
# GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
#
# David Canino, December 2016
#
# CMakeLists.txt - the CMake directives for building the test 'Example-036'
##################################################################################

cmake_minimum_required(VERSION 2.8.6 FATAL_ERROR)
project(Example-036 LANGUAGES CXX)
if (APPLE OR CMAKE_HOST_APPLE)
	include_directories(../include)
	add_executable(Example-036 ../src/myheader.cpp ../src/main.cpp)
elseif (UNIX OR CMAKE_HOST_UNIX)
	include_directories(../include)
	add_executable(Example-036 ../src/myheader.cpp ../src/main.cpp)
elseif (WIN32 OR CMAKE_HOST_WIN32)
	include_directories(../include)
	add_executable(Example-036 ../src/myheader.cpp ../src/main.cpp)
else ()
	message(FATAL_ERROR "The current platform is not supported")
endif ()

