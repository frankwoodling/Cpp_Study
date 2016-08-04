cmake_minimum_required(VERSION 3.5)
project(myfirst)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(myfirst ${SOURCE_FILES})