CC := cc
CFLAGS := -Wall -Wextra -Werror
FILE_EXTENSION := .c

NAME := libft.a

SRC_DIRS := .
BUILD_DIR := ./build

SRCS := $(shell find $(SRC_DIRS) -name '*$(FILE_EXTENSION)' -and -not -name '*_bonus$(FILE_EXTENSION)')
SRCS_BONUS := $(shell find $(SRC_DIRS) -name '*_bonus$(FILE_EXTENSION)')
OBJS := $(SRCS:$(FILE_EXTENSION)=.o)
OBJS_BONUS := $(SRCS_BONUS:$(FILE_EXTENSION)=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS) libft.h
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus : $(OBJS) $(OBJS_BONUS) libft.h
	ar rc $(NAME) $(OBJS) $(OBJS_BONUS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all $(NAME) clean fclean re bonus
