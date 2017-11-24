/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 18:09:16 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/20 15:07:07 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_print_param(struct s_stock_par *par, int i)
{
	int j;

	j = 0;
	while (par[i].str[j] != '\0')
	{
		ft_putchar(par[i].str[j]);
		j++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int result;

	if (nb <= 2147483647 && nb >= -2147483648)
	{
		result = nb;
		if (nb < 0)
		{
			ft_putchar('-');
			result = -nb;
		}
		if (result > 9)
		{
			ft_putnbr(result / 10);
			ft_putnbr(result % 10);
		}
		if (nb <= 9 && nb >= 0)
			ft_putchar('0' + nb);
	}
}

void	ft_print_all_words(struct s_stock_par *par, int i)
{
	int j;
	int k;

	j = 0;
	while (par[i].tab[j] != 0)
	{
		k = 0;
		while (par[i].tab[j][k] != '\0')
		{
			ft_putchar(par[i].tab[j][k]);
			k++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_print_param(par, i);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_all_words(par, i);
		i++;
	}
}
