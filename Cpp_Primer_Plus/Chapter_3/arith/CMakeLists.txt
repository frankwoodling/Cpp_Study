cmake_minimum_required(VERSION 3.5)
project(arith)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(arith ${SOURCE_FILES})