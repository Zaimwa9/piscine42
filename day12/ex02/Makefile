# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wzaim <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/23 00:04:17 by wzaim             #+#    #+#              #
#    Updated: 2017/08/23 00:13:36 by wzaim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
CFLAGS = -c -Werror -Wall -Wextra
SRCS = ft_putchar.c ft_atoi.c ft_print_error.c ft_print_illegal_offset.c \
	   ft_print_read.c ft_tail_file.c ft_tfo.c ft_putstr.c main.c \
	   ft_print_name.c
OBJ = ft_putchar.o ft_atoi.o ft_print_error.o ft_print_illegal_offset.o \
	  ft_print_read.o ft_tail_file.o ft_tfo.o ft_putstr.o main.o \
	  ft_print_name.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRCS)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -rf $(NAME)

