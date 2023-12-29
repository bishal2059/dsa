cmake_minimum_required(VERSION 3.26)
project(dsa)

set(CMAKE_CXX_STANDARD 17)

add_executable(dsa main.cpp)

add_executable(array_insertion array_insertion.cpp)
add_executable(array_deletion array_deletion.cpp)
add_executable(stack_operation stack_operation.cpp)