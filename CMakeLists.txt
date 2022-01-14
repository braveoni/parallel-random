cmake_minimum_required(VERSION 3.22)
project(parallel_random)

set(CMAKE_CXX_STANDARD 20)

find_package(OpenMP REQUIRED)

add_executable(parallel_random main.cpp)
target_link_libraries(parallel_random PUBLIC OpenMP::OpenMP_CXX pthread)