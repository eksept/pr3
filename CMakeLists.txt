cmake_minimum_required(VERSION 3.10)
project(MyPrograms C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_EXE_LINKER_FLAGS "-lm")

add_executable(1 prak1.c)
add_executable(2 prak2.c)
add_executable(3 prak3.c)
add_executable(4 prak4.c)
