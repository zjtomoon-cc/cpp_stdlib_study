cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 20)

# algorithm
project(adjacent_find)
# adjacent_find
add_executable(adjacent_find algorithm/adjacent_find/main.cpp)

project(all_of)
add_executable(all_of algorithm/all_of/main.cpp)

project(any_of)
add_executable(any_of algorithm/any_of/main.cpp)

project(binary_search)
add_executable(binary_search algorithm/binary_search/main.cpp)

project(copy)
add_executable(copy algorithm/copy/main.cpp)