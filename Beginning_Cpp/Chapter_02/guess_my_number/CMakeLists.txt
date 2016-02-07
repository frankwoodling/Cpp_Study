cmake_minimum_required(VERSION 3.3)
project(guess_my_number)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(guess_my_number ${SOURCE_FILES})