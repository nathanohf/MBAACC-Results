# Compiler and flags
CC = gcc
CFLAGS = -Wall -I./include

# Directories
SRC_DIR = src
OBJ_DIR = obj
INCLUDE_DIR = include

# Source files
SRC_FILES = $(SRC_DIR)/main.c $(SRC_DIR)/stats.c

# Object files (derived from source files)
OBJ_FILES = $(SRC_FILES:.c=.o)

# Output executable
OUTPUT = prog  # The name of the final executable

# Rule to build the program
$(OUTPUT): $(OBJ_FILES)
	$(CC) $(OBJ_FILES) -o $(OUTPUT)

# Rule to compile .c files into .o files
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove object files and the executable
clean:
	rm -f $(OBJ_FILES) $(OUTPUT)

# Phony targets
.PHONY: clean

