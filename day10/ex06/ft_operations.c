/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 14:29:20 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/23 14:30:35 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_sum(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
	return (a + b);
}

int		ft_substraction(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
	return (a - b);
}

int		ft_multiply(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
	return (a * b);
}

int		ft_modulo(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	ft_putnbr(a % b);
	ft_putchar('\n');
	return (a % b);
}

int		ft_divide(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	ft_putnbr(a / b);
	ft_putchar('\n');
	return (a / b);
}
