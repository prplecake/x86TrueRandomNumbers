cmake_minimum_required(VERSION 3.27)
project(x86RandomNumbers C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "-mrdseed")

add_executable(x86RandomNumbers main.c)
add_executable(x86RandomNumbersPsuedo psuedo.c)
