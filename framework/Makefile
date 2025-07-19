NAME = libunit.a

AR = ar
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
INCLUDES = -I../libft/include

SOURCES =	launch_tests.c	\
			load_test.c		\
			load_unit.c		\
			extra_funcs.c

OBJECTS = $(SOURCES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) rcs $(NAME) $?

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
