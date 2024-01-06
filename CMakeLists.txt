cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(myprogram src/main.c src/intro.c)
