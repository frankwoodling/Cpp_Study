cmake_minimum_required(VERSION 3.5)
project(use_new)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(use_new ${SOURCE_FILES})