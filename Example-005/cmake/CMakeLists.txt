##################################################################################
#
# Examples in the C++ language (the test 'Example-005’)
#
# GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
#
# David Canino, December 2016
#
# CMakeLists.txt - the CMake directives for building the test 'Example-005'
##################################################################################

cmake_minimum_required(VERSION 2.8.6 FATAL_ERROR)
project(Example-005 LANGUAGES CXX)
if (APPLE OR CMAKE_HOST_APPLE)
	include_directories(../include)
	add_executable(Example-005 ../src/myfunc.cpp ../src/main.cpp)
elseif (UNIX OR CMAKE_HOST_UNIX)
	include_directories(../include)
	add_executable(Example-005 ../src/myfunc.cpp ../src/main.cpp)
elseif (WIN32 OR CMAKE_HOST_WIN32)
	include_directories(../include)
	add_executable(Example-005 ../src/myfunc.cpp ../src/main.cpp)
else ()
	message(FATAL_ERROR "The current platform is not supported")
endif ()
