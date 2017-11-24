/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 00:02:33 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/23 00:02:57 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argv[1][0] != '-' && argv[1][1] != 'c' && argv[1][2] != '\0')
	{
		while (i < argc)
		{
			ft_tail_file(argv[i], 0, i, argc - 1);
			i++;
		}
	}
	if (argv[1][0] == '-' && argv[1][1] == 'c' && argv[1][2] == '\0')
	{
		if (ft_atoi(argv[2]) == 0)
		{
			ft_print_illegal_offset(argv[2]);
			return (0);
		}
		while (i + 2 < argc)
		{
			ft_tfo(argv[i + 2], i, argc - 3, ft_atoi(argv[2]));
			i++;
		}
	}
	return (0);
}
