# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grinella <grinella@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 11:28:20 by grinella          #+#    #+#              #
#    Updated: 2023/06/30 18:32:06 by grinella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./incl/push_swap.h

SRC =\
	src/main.c \
	src/algo.c \
	src/ft_atol.c \
	src/ft_lstpop.c \
	src/ft_stack_new.c \
	src/moves.c \
	src/rotate.c \
	src/utils.c \
	src/ft_putnbr_fd.c \
	src/ft_putchar_fd.c \
	src/ft_putstr_fd.c\
	src/ft_strlen.c\
	src/print.c\
	src/ft_split.c\
	src/trans_.c\
	src/errors.c\
	src/free.c\
	src/check.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ make -C ./libft
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@ make clean -C ./libft

fclean: clean
	rm -f $(NAME)
	@ make fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re
