/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 14:23:06 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/21 11:20:05 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_asc(int *tab, int length, int (*f) (int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_desc(int *tab, int length, int (*f) (int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	if (ft_is_asc(tab, length, f) || ft_is_desc(tab, length, f))
		return (1);
	return (0);
}
