cmake_minimum_required(VERSION 3.26)
project(dsa)

set(CMAKE_CXX_STANDARD 17)

add_executable(dsa main.cpp)

add_executable(array_insertion array_insertion.cpp)
add_executable(array_deletion array_deletion.cpp)
add_executable(stack_operation stack_operation.cpp)
add_executable(singly_linked_list singly_linked_list.cpp)
add_executable(queue_operation queue_operation.cpp)
add_executable(infix_to_postfix infix_to_postfix.cpp)
add_executable(tower_of_hanoi tower_of_hanoi.cpp)
add_executable(fibonacci fibonacci.cpp)