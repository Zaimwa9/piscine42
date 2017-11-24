/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 17:48:25 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/07 19:20:10 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb);

int		ft_is_prime(int nb);

int		ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb == 1 || nb == 0)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0)
		return (0);
	while (i <= nb / 2)
		if (nb % i == 0)
			return (0);
		else
			i++;
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb >= 0)
		i = nb;
	else
		i = 0;
	while (ft_is_prime(i) != 1)
	{
		i++;
	}
	return (i);
}
