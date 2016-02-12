cmake_minimum_required(VERSION 3.3)
project(global_reach)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(global_reach ${SOURCE_FILES})