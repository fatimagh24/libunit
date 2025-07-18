NAME = fopen_tests

LIBUNIT_PATH = ../../framework

CC = cc
CFLAGS = -Wall -Wextra -g
LDFLAGS = -L$(LIBUNIT_PATH) -lunit
INCLUDES = -I$(LIBUNIT_PATH)

SOURCES = 	../../functions/ft_popen.c	\
			00_launcher.c					\
			01_invalid_mode_test.c			\
			../main.c

OBJECTS = $(SOURCES:%.c=%.o)

all: $(NAME)

libunit: 
	@$(MAKE) -C $(LIBUNIT_PATH)

$(NAME): $(OBJECTS) $(LIBUNIT_PATH)/libunit.a | libunit
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

test: $(NAME)
	./$(NAME)

clean:
	rm -f $(OBJS) $(NAME)

rebuild: clean all

.PHONY: all test clean rebuild