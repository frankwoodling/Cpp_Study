cmake_minimum_required(VERSION 3.3)
project(game_stats2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(game_stats2 ${SOURCE_FILES})