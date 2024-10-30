# Variables
SRC_DIR = src
BUILD_DIR = build
CFLAGS = -Wall #-Werror
CC= -gcc
# Automatically find all C source files in the src directory
SRCS = $(wildcard $(SRC_DIR)/*.c)
# Generate corresponding output executable names in the build directory
EXES = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%, $(SRCS))

# Create build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Rule to build all executables
all: $(BUILD_DIR) $(EXES)

# Generic rule to compile each .c file to an executable
$(BUILD_DIR)/%: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $< -o $@

# Clean up build files
clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean

