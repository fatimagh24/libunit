# Makefile for libunit tests

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

BUILD_DIR = build

SOURCES =	framework/load_test.c				\
			framework/launch_tests.c			\
			framework/utils.c			\
			\
			real-tests/ft_strlen/01_basic_test.c		\
			real-tests/ft_strlen/03_big_text_test.c	\
			real-tests/ft_strlen/00_launcher.c			\
			real-tests/ft_strlen/02_null_test.c			\
			real-tests/ft_strlen/04_segfault_test.c		\
			real-tests/ft_atoi/00_launcher.c			\
			real-tests/ft_atoi/01_basic_positive_test.c	\
			real-tests/ft_atoi/02_basic_negative_test.c	\
			real-tests/ft_atoi/03_zero_test.c

OBJECTS = $(SOURCES:/%.c=$(BUILD_DIR)/%.o)

all: $(TARGETS)

# Compile object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Link executables
$(BIN_DIR)/%: $(OBJ_DIR)/%.o | $(BIN_DIR)
	$(CC) $< -o $@ $(LDFLAGS)

# Run all tests
test: $(TARGETS)
	@echo "Running tests..."
	@for test in $(TARGETS); do \
		echo "Running $$test"; \
		$$test || exit 1; \
	done

# Create directories if they don't exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Clean build artifacts
clean:
	rm -rf  $()

# Force rebuild
re: fclean all

# Default target
.PHONY: all clean test
