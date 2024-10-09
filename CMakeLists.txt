cmake_minimum_required(VERSION 3.10)
project(low_level)

set(CMAKE_C_STANDARD 11)

# Gather all source files in the src directory
file(GLOB_RECURSE SRC_FILES "src/*.c")

# Create the executable using all source files
add_executable(myprogram ${SRC_FILES})

# Include directories for the target
target_include_directories(myprogram PUBLIC include)
