cmake_minimum_required(VERSION 3.3)
project(hw1 CXX)
include(.idea/eecs230/CMakeCommon.txt)

add_program(convert src/convert.cpp)
add_program(stats src/stats.cpp)
