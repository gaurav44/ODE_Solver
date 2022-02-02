cmake_minimum_required(VERSION 3.1)
project(ODE_solver VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

include_directories(${ODE_solver_SOURCE_DIR}/src)

add_subdirectory(${ODE_solver_SOURCE_DIR}/src)
add_subdirectory(${ODE_solver_SOURCE_DIR}/test)
add_subdirectory(${ODE_solver_SOURCE_DIR}/lib/googletest)
add_subdirectory(${ODE_solver_SOURCE_DIR}/lib/eigen-3.4-rc1)
