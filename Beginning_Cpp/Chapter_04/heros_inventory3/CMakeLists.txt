cmake_minimum_required(VERSION 3.3)
project(heros_inventory3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(heros_inventory3 ${SOURCE_FILES})