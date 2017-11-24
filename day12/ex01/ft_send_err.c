/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_err.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 14:08:18 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/22 14:22:37 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_send_err(int err, char *file)
{
	if (err == 1)
	{
		write(2, "cat: ", 5);
		ft_putstr(file);
		write(2, ": No such file or directory", 27);
		ft_putchar('\n');
	}
}
