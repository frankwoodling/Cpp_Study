#cmake_minimum_required(VERSION 3.5)
#project(libcurl_test)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#set(SOURCE_FILES main.cpp)
#add_executable(libcurl_test ${SOURCE_FILES})

# doesn't work at all
#set(Poco_INCLUDE_DIR D:/cpp_libraries/poco-1.7.4)
#set(Poco_LIBRARY_DIR D:/cpp_libraries/poco-1.7.4/lib)
#find_package(Poco COMPONENTS JSON)
#include_directories(${Poco_INCLUDE_DIR})
#link_directories(${Poco_LIBRARY_DIR})
#add_executable(main main.cpp)
##target_link_libraries( main ${Boost_LIBRARIES} )


# Works for lambda, but not timer
#set(Boost_INCLUDE_DIR D:/cpp_libraries/boost_1_61_0)
#set(Boost_LIBRARY_DIR D:/cpp_libraries/boost_1_61_0/stage/libs)
#find_package(Boost COMPONENTS timer)
#include_directories(${Boost_INCLUDE_DIR})
#link_directories(${Boost_LIBRARY_DIR})
#add_executable(main main.cpp)
#target_link_libraries( main ${Boost_LIBRARIES} )

cmake_minimum_required(VERSION 3.5)
project(libcurl_test)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cpp)
add_executable(libcurl_test ${SOURCE_FILES})

set(CURL_INCLUDE_DIRS D:/cpp_libraries/curl-7.50.1)
set(CURL_LIBRARIES D:/cpp_libraries/curl-7.50.1/lib)
find_package(curl COMPONENTS timer)
include_directories(${CURL_INCLUDE_DIRS})
link_directories(${CURL_LIBRARIES})
