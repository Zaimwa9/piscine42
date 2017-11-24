/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 21:17:12 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/03 21:27:35 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2();

int		ft_putchar(char c);

void	ft_print_commas(char a, char b);

void	ft_print_commas(char a, char b)
{
	if (a == '9' && b == '8')
	{
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_check_print(char a, char b, char c, char d);

void	ft_check_print(char a, char b, char c, char d)
{
	if (a < c)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		ft_print_commas(a, b);
	}
	if (a == c && b < d)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		ft_print_commas(a, b);
	}
}

void	ft_print_comb2(void)
{
	char i;
	char j;
	char k;
	char l;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{
				l = '0';
				while (l <= '9')
				{
					ft_check_print(i, j, k, l++);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
