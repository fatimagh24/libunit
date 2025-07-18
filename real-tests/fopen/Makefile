NAME = fopen_tests

LIBUNIT_PATH = ../../framework

CC = cc
CFLAGS = -Wall -Wextra -std=c99 -g
LDFLAGS = -L$(LIBUNIT_PATH) -lunit
INCLUDES = -I$(LIBUNIT_PATH)

SOURCES = 	../../functions/ft_popen.c	\
			00_launcher.c					\
			01_invalid_mode_test.c			\

OBJECTS = $(SOURCES:%.c=%.o)

# Default target
all: $(NAME)

$(LIBUNIT_PATH)/libunit.a:
	$(MAKE) -C $(LIBUNIT_PATH)

# Build the test executable
$(NAME): $(OBJECTS) $(LIBUNIT_PATH)/libunit.a
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)

# Compile object files
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Run tests
test: $(NAME)
	./$(NAME)

# Clean build artifacts
clean:
	rm -f $(OBJS) $(NAME)

# Force rebuild
rebuild: clean all

.PHONY: all test clean rebuild