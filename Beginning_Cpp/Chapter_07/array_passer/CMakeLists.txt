cmake_minimum_required(VERSION 3.3)
project(array_passer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(array_passer ${SOURCE_FILES})