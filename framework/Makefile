NAME = libunit.a

AR = ar
CC = cc
CFLAGS = -Wall -Wextra -std=c99 -g

SOURCES =	launch_tests.c	\
			load_test.c		\

OBJECTS = $(SOURCES:%.c=%.o)

# Default target
all: $(NAME)

# Build the test executable
$(NAME): $(OBJECTS)
	$(AR) rcs $(NAME) $?

# Compile object files
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Clean build artifacts
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

# Force rebuild
re: clean all

.PHONY: all clean fclean re
