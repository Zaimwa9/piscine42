/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 14:31:59 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/07 20:44:23 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size);

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 1;
	j = 0;
	tmp = 0;
	while (i < size)
	{
		j = size - 1;
		while (j > 0)
		{
			if (tab[j - 1] > tab[j])
			{
				tmp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = tmp;
			}
			j--;
		}
		i++;
	}
}
