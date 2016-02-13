cmake_minimum_required(VERSION 3.3)
project(c5e2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(c5e2 ${SOURCE_FILES})