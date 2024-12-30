# C and C++ Compilers
CC = gcc
CXX = g++

# Compiler flags
# -Wall: Enable common warnings
# -Wextra: Enable extra warnings
# -g: Include debugging information
# -std=c++17: Use the C++17 standard (C++ only)
# -Iinclude: Include the "include" directory for header files
CFLAGS = -Wall -Wextra -g -Iinclude
CXXFLAGS = -Wall -Wextra -g -pedantic -pedantic-errors -std=c++17 -Iinclude

# Target executable name
TARGET = program

# Directories
SRC_DIR = src
OBJ_DIR = build
INC_DIR = include

# Source files (finds all .c and .cpp files in the src directory)
C_SRCS = $(wildcard $(SRC_DIR)/*.c)
CPP_SRCS = $(wildcard $(SRC_DIR)/*.cpp)

# Object files (maps source files to object files in the build directory)
C_OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(C_SRCS))
CPP_OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(CPP_SRCS))
OBJS = $(C_OBJS) $(CPP_OBJS)

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Rule to compile C source files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to compile C++ source files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -rf $(OBJ_DIR) $(TARGET)

# Run the program
run: all
	./$(TARGET)

