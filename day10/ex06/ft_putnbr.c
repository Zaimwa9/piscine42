/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 14:28:13 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/23 20:45:14 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

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
		if ((nb <= 9 && nb >= 0) || (nb <= 0 && nb >= -9))
			ft_putchar('0' + result);
	}
}
