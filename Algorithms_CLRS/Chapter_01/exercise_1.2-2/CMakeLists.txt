cmake_minimum_required(VERSION 3.3)
project(exercise_1_2_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(exercise_1_2_2 ${SOURCE_FILES})