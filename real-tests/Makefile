NAME = tests

LIBUNIT_PATH = ../framework
LIBFT_PATH = ../libft

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
LDFLAGS = -L$(LIBUNIT_PATH) -lunit 	\
			-L$(LIBFT_PATH) -lft	\

INCLUDES = -I$(LIBUNIT_PATH)		\
			-I$(LIBFT_PATH)/include \

SOURCES = main.c


SOURCES +=	ft_atoi/02_basic_negative_test.c 	\
			ft_atoi/03_zero_test.c				\
			ft_atoi/00_launcher.c				\
			ft_atoi/01_basic_positive_test.c	\

SOURCES +=	ft_strmapi/00_launcher.c			\
			ft_strmapi/01_toupper_test.c		\
			ft_strmapi/02_shift_index_test.c	\
			ft_strmapi/03_invert_test.c			\
			ft_strmapi/04_empty_str_test.c		\
			ft_strmapi/05_reblace_ascii_test.c	\
			ft_strmapi/06_segfault_test.c		\
			ft_strmapi/07_replace_test.c		\

SOURCES +=	ft_itoa/00_launcher.c					\
			ft_itoa/01_zero_with_sign_test.c		\
			ft_itoa/02_positive_test.c				\
			ft_itoa/03_negative_no_sign_test.c		\
			ft_itoa/04_maxint_test.c				\
			ft_itoa/05_minint_test.c				\
			ft_itoa/06_large_negative_test.c		\
			ft_itoa/07_boundry_test.c				\
			ft_itoa/08_negative_sign_test.c			\
			ft_itoa/15_zero_without_sign_test.c		\
			ft_itoa/13_minint_nosign_test.c			\
			ft_itoa/14_large_pos_test.c				\
			ft_itoa/09_trailing_zeros_test.c		\
			ft_itoa/10_negative_zero_test.c			\
			ft_itoa/11_overflow_test.c				\
			ft_itoa/12_overflow_negative_test.c		\

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
	$(MAKE) fclean -C $(LIBUNIT_PATH)
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)


re: clean all

.PHONY: all test clean re libunit libft