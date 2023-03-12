cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 20)

# algorithm
# adjacent_find
project(adjacent_find)
add_executable(adjacent_find algorithm/adjacent_find/main.cpp)

project(all_of)
add_executable(all_of algorithm/all_of/main.cpp)