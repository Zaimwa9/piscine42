/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 18:13:52 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/03 21:54:02 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

int		ft_putchar(char c);

void	ft_is_negative(int n)
{
	char c;

	if (n < 0)
	{
		c = 'N';
		ft_putchar(c);
	}
	else
	{
		c = 'P';
		ft_putchar(c);
	}
	;
}
