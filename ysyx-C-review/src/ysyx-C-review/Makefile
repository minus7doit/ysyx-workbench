# Compiler and flags
CC = gcc
CFLAGS ?=#-Iinclude -Wall -Werror

# Source files and object files
SRC_DIR = src
INCLUDE_DIR = include
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

# Executable name
TARGET = my_program

# Default target
all: $(TARGET)

# Rule to link the object files into the final executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

# Rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up the build files
clean:
	rm -f $(SRC_DIR)/*.o $(TARGET)

# Phony targets
.PHONY: all clean

