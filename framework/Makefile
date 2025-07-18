NAME = libunit.a

AR = ar
CC = cc
CFLAGS = -Wall -Wextra -g

SOURCES =	launch_tests.c	\
			load_test.c		\

OBJECTS = $(SOURCES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) rcs $(NAME) $?

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
