cmake_minimum_required(VERSION 3.3)
project(project_euler_001)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(project_euler_001 ${SOURCE_FILES})