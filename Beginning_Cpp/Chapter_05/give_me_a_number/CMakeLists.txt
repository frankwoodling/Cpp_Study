cmake_minimum_required(VERSION 3.3)
project(give_me_a_number)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(give_me_a_number ${SOURCE_FILES})