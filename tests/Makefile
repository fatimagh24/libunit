NAME = tests

LIBUNIT_PATH = ../framework
LIBFT_PATH = ../libft

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
LDFLAGS = -L$(LIBUNIT_PATH) -lunit 	\
			-L$(LIBFT_PATH) -lft	\

INCLUDES = -I$(LIBUNIT_PATH)			\
			-I$(LIBFT_PATH)/include 	\

SOURCES = main.c

SOURCES +=	kill/00_launcher.c			\
			kill/04_invalid_signal.c	\
			kill/03_signal_cont_test.c	\
			kill/02_signal_bus_test.c	\
			kill/01_signal_segv_test.c	\

SOURCES += ft_strlen_face/00_launcher.c		\
			ft_strlen_face/01_basic_test.c	\

OBJS = $(SOURCES:%.c=%.o)

all: $(NAME)

libunit $(LIBUNIT_PATH)/libunit.a: 
	@$(MAKE) -C $(LIBUNIT_PATH)

libft $(LIBFT_PATH)/libft.a:
	@$(MAKE) -C $(LIBFT_PATH)

$(NAME): $(OBJS) $(LIBUNIT_PATH)/libunit.a $(LIBFT_PATH)/libft.a | libunit libft
	$(CC) $(OBJS) -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

test: $(NAME)
	./$(NAME)

clean:
	$(MAKE) clean -C $(LIBFT_PATH)
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)


re: clean all

.PHONY: all test clean re libunit libft