/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_name.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 23:54:53 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/23 00:25:46 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_print_name(char *str, int nbfile, int count)
{
	if (nbfile > 1 && count != 1)
		ft_putchar('\n');
	if (nbfile > 1)
	{
		ft_putstr("==> ");
		ft_putstr(str);
		ft_putstr(" <==");
		ft_putchar('\n');
	}
}
