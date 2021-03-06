/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 15:03:04 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/07 17:17:26 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb);

int		ft_sqrt(int nb)
{
	int		i;

	i = 0;
	if (nb <= 0 || nb >= 2147483647)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		if (i * i < nb)
			i++;
		if (i * i > nb)
			return (0);
	}
	return (i);
}
