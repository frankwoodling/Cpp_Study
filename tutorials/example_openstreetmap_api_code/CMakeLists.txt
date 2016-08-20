cmake_minimum_required(VERSION 3.5)
project(example_openstreetmap_api_code)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(example_openstreetmap_api_code ${SOURCE_FILES})