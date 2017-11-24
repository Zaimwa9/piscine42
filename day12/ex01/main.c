/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 14:11:32 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/22 14:12:17 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc >= 2)
	{
		while (argv[i])
			ft_display_file(argv[i++]);
		return (0);
	}
	if (argc < 2 || (argv[1][0] == '-' && argv[1][1] == '\0'))
	{
		ft_display_pipe(0);
		return (0);
	}
	return (0);
}
