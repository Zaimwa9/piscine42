# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wzaim <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 21:34:21 by wzaim             #+#    #+#              #
#    Updated: 2017/08/21 21:39:00 by wzaim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CFLAGS = -c -Werror -Wall -Wextra
SRCS = ft_putchar.c ft_putstr.c ft_display_file.c main.c
OBJ = ft_putchar.o ft_putstr.o ft_display_file.o main.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRCS)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -rf $(NAME)

re: fclean all
