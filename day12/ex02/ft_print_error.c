/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 23:55:27 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/23 00:25:27 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_print_error(char *file, int nbfile, int count, int ret)
{
	if (ret == 0)
		return ;
	else
		ft_putstr("tail: ");
	ft_putstr(file);
	ft_putstr(": No such file or directory");
	if (count <= nbfile)
		ft_putchar('\n');
}
