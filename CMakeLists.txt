cmake_minimum_required(VERSION 3.21)
project(test_lib)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(yaml)
add_subdirectory(gflag)
add_subdirectory(glog)
add_subdirectory(eigen)

add_executable(test main.cpp glog/test_glog.cpp)

