# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grinella <grinella@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 11:28:20 by grinella          #+#    #+#              #
#    Updated: 2023/05/19 13:57:28 by grinella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./incl/push_swap.h

SRC =\
	prgm/main.c \
	src/algo.c \
	src/ft_lstpop.c \
	src/ft_stack_new.c \
	src/moves.c \
	src/rotate.c \
	src/utils.c \
	src/ft_putnbr_fd.c \
	src/ft_putchar_fd.c \
	src/ft_putstr_fd.c\
	src/ft_strlen.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
