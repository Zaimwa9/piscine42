/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 14:31:57 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/23 15:11:06 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int argc, char **argv)
{
	int		o;
	t_op	ftop[5];

	init(ftop);
	if (argc != 4)
		return (0);
	o = ft_check_op(argv[2][0], ftop);
	if (o == -1)
	{
		ft_putstr("0\n");
		return (0);
	}
	ftop[o].f(ft_atoi(argv[1]), ft_atoi(argv[3]));
	return (0);
}
