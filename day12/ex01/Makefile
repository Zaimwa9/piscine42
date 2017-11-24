# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wzaim <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/22 11:31:09 by wzaim             #+#    #+#              #
#    Updated: 2017/08/23 00:12:06 by wzaim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
CFLAGS = -c -Werror -Wall -Wextra
SRCS = ft_putchar.c ft_putstr.c ft_display_file.c ft_display_pipe.c main.c \
	   ft_send_err.c
OBJ = ft_putchar.o ft_putstr.o ft_display_file.o ft_display_pipe.o main.o \
	  ft_send_err.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRCS)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -rf $(NAME)

re: fclean all
