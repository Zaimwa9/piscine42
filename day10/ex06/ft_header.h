/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 10:40:07 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/23 14:56:41 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>

typedef struct	s_op
{
	char	type;
	int		(*f)(int, int);
}				t_op;

void			ft_putchar(char c);
int				ft_atoi(char *str);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
int				ft_sum(int a, int b);
int				ft_substraction(int a, int b);
int				ft_multiply(int a, int b);
int				ft_modulo(int a, int b);
int				ft_divide(int a, int b);
void			init(t_op *ftop);
int				ft_check_op(char c, t_op *ftop);
int				main(int argc, char **argv);

#endif
