cmake_minimum_required(VERSION 3.5)
project(strtype1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(strtype1 ${SOURCE_FILES})