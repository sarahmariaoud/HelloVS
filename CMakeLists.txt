cmake_minimum_required(VERSION 2.8.9)
project(directory_test)

add_definitions(-std=c++17)
set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")


#Bring the headers, such as Student.h into the project
include_directories(includes)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_executable(out ${SOURCES})