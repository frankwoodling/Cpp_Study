cmake_minimum_required(VERSION 3.3)
project(die_roller)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(die_roller ${SOURCE_FILES})