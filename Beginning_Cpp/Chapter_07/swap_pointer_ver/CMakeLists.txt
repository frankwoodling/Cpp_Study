cmake_minimum_required(VERSION 3.3)
project(swap_pointer_ver)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(swap_pointer_ver ${SOURCE_FILES})