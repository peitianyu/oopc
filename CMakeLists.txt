cmake_minimum_required(VERSION 3.3)
project(oopc_test)
SET(CMAKE_C_COMPILER "gcc")

include_directories(src)
file(GLOB_RECURSE ALL_LIBRIRY_SRCS "src/*.c")

add_executable(${PROJECT_NAME} ${ALL_LIBRIRY_SRCS})
