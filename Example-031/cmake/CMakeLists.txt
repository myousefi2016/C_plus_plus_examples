##################################################################################
#
# Examples in the C++ language (the test 'Example-031’)
#
# GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
#
# David Canino, December 2016
#
# CMakeLists.txt - the CMake directives for building the test 'Example-031’
##################################################################################

cmake_minimum_required(VERSION 2.8.0 FATAL_ERROR)
project(Example-031 LANGUAGES CXX)
include_directories(../include)
add_executable(Example-031 ../src/main.cpp)
