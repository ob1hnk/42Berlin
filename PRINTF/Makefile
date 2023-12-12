# Makefile for libftprintf.a

# Compiler and compiler flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files and object files
SRC = ft_printf.c ft_printf_util.c ft_printf_num.c

OBJ = $(SRC:.c=.o)

# Library name
NAME = libftprintf.a

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean flean re