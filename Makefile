CC := cc
CFLAGS = -Wall -Wextra -Werror -fPIE -I $(INCLUDE_DIR)
FILE_EXTENSION := .c

NAME := libftprintf.a

SRC_DIR := src
BUILD_DIR := build
INCLUDE_DIR := inc/

SRCS := $(shell find $(SRC_DIR) -name '*$(FILE_EXTENSION)' -printf "%f\n")
OBJS := $(SRCS:$(FILE_EXTENSION)=.o)
HEADERS := $(SRCS:$(FILE_EXTENSION)=.h)

FULL_PATH_SRCS := $(addprefix $(SRC_DIR)/,$(SRCS))
FULL_PATH_OBJS := $(addprefix $(BUILD_DIR)/,$(OBJS))

all: $(NAME)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(FULL_PATH_OBJS) libft/libft.a
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(FULL_PATH_OBJS)
	ranlib $(NAME)

libft/libft.a:
	make -sC libft

clean:
	rm -f $(BUILD_DIR)/*
	make -s clean -C libft

fclean: clean
	rm -f $(NAME)
	make -s fclean -C libft

re: fclean all

.PHONY: all $(NAME) clean fclean re libft/libft.a
