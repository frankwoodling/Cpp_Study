cmake_minimum_required(VERSION 3.3)
project(play_again)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(play_again ${SOURCE_FILES})