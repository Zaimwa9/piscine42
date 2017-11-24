/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 10:44:08 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/20 15:13:42 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (i < ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*stock;
	int				i;

	i = 0;
	stock = malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		stock[i].size_param = ft_strlen(av[i]);
		stock[i].str = &av[i][0];
		stock[i].copy = &ft_strdup(av[i])[0];
		stock[i].tab = &ft_split_whitespaces(av[i])[0];
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
