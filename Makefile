# C and C++ Compilers
CC = gcc
CXX = clang++

# Compiler flags
CFLAGS = -Wall -Wextra -g -Isrc
CXXFLAGS = -Wall -Wextra -Werror -g -pedantic -pedantic-errors -std=c++20 -Isrc

# Target executable name
TARGET = program

# Directories
SRC_DIR = src
OBJ_DIR = build

# Source files
C_SRCS = $(wildcard $(SRC_DIR)/*.c)
CPP_SRCS = $(wildcard $(SRC_DIR)/*.cpp)

# Object files
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

