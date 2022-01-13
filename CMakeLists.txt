cmake_minimum_required(VERSION 3.1)
project(ODE_solver VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/googletest)
add_subdirectory(lib/eigen-3.4-rc1)
