cmake_minimum_required(VERSION 3.5)
project(c02e02)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(c02e02 ${SOURCE_FILES})