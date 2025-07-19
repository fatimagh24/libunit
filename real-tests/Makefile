NAME = tests

LIBUNIT_PATH = ../framework
LIBFT_PATH = ../libft

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
LDFLAGS = -L$(LIBUNIT_PATH) -lunit 	\
			-L$(LIBFT_PATH) -lft	\

INCLUDES = -I$(LIBUNIT_PATH)		\
			-I$(LIBFT_PATH) 		\

SOURCES = main.c

### ft_atoi tests files
FT_ATOI_TESTS ?= 1
ifeq ($(FT_ATOI_TESTS), 1)
CFLAGS += -DFT_ATOI_TESTS
SOURCES +=	ft_atoi/02_basic_negative_test.c 	\
			ft_atoi/03_zero_test.c				\
			ft_atoi/00_launcher.c				\
			ft_atoi/01_basic_positive_test.c	\

endif

FT_STRMAPI_TESTS ?= 1
ifeq ($(FT_STRMAPI_TESTS), 1)
CFLAGS += -DFT_STRMAPI_TESTS
SOURCES +=	ft_strmapi/00_launcher.c		\
			ft_strmapi/01_toupper_test.c	\
			ft_strmapi/02_shift_index_test.c	\
			ft_strmapi/03_invert_test.c		\
			ft_strmapi/04_empty_str_test.c	\
			ft_strmapi/05_reblace_ascii_test.c	\
			ft_strmapi/06_segfault_test.c	\
			ft_strmapi/07_replace_test.c	\

endif

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
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)


re: clean all

.PHONY: all test clean re libunit libft