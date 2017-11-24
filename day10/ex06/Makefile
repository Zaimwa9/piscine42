# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wzaim <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/23 14:35:47 by wzaim             #+#    #+#              #
#    Updated: 2017/08/23 14:58:56 by wzaim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
CFLAGS = -c -Werror -Wall -Wextra
SRC = ft_atoi.c ft_check_op.c ft_init_array.c ft_operations.c ft_putchar.c \
	  ft_putnbr.c ft_putstr.c main.c
OBJ = ft_atoi.o ft_check_op.o ft_init_array.o ft_operations.o ft_putchar.o \
	  ft_putnbr.o ft_putstr.o main.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRC)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
