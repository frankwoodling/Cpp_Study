cmake_minimum_required(VERSION 3.3)
project(tic_tac_toe_board)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(tic_tac_toe_board ${SOURCE_FILES})