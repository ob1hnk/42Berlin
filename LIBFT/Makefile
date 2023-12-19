# Makefile for libft.a

# Compiler and compiler flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files and object files
SRC = ft_isdigit.c ft_putchar_fd.c ft_strlcat.c ft_substr.c\
ft_split.c ft_isprint.c ft_putendl_fd.c ft_strlcpy.c  ft_tolower.c\
ft_atoi.c ft_itoa.c ft_putnbr_fd.c ft_strlen.c ft_toupper.c ft_bzero.c\
ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_calloc.c ft_memcmp.c ft_strchr.c\
ft_strncmp.c ft_isalnum.c ft_memcpy.c ft_strdup.c ft_strnstr.c ft_isalpha.c\
ft_memmove.c ft_striteri.c ft_strrchr.c ft_isascii.c ft_memset.c ft_strjoin.c ft_strtrim.c\

OBJ = $(SRC:.c=.o)

# Library name
NAME = libft.a

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
