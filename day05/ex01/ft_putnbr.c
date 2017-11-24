/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:46:35 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/14 16:03:30 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
