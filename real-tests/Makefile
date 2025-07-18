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

ifndef FT_POPEN_TESTS
FT_POPEN_TESTS = 1
endif
ifeq ($(FT_POPEN_TESTS), 1)
# CFLAGS += -DFT_POPEN_TESTS
SOURCES +=	../functions/ft_popen.c				\
			fopen/00_launcher.c					\
			fopen/01_invalid_mode_test.c		\

endif

ifndef FT_ATOI_TESTS
FT_ATOI_TESTS = 1
endif
ifeq ($(FT_ATOI_TESTS), 1)
# CFLAGS += -DFT_ATOI_TESTS
SOURCES +=	ft_atoi/02_basic_negative_test.c 	\
			ft_atoi/03_zero_test.c				\
			ft_atoi/00_launcher.c				\
			ft_atoi/01_basic_positive_test.c	\

endif


OBJS = $(SOURCES:%.c=%.o)

all: $(NAME)

libunit: 
	@$(MAKE) -C $(LIBUNIT_PATH)

libft:
	@$(MAKE) -C $(LIBFT_PATH)

$(NAME): $(OBJS) $(LIBUNIT_PATH)/libunit.a $(LIBFT_PATH)/libft.a | libft libunit 
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

.PHONY: all test clean re