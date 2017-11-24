/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tfo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 23:58:51 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/24 10:38:20 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_tfo(char *file, int count, int nbfile, int bts)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];
	int		pos;
	int		option;

	pos = 0;
	fd = open(file, O_RDONLY, S_IRUSR);
	if ((ret = read(fd, buf, 1)) < 0)
	{
		ft_print_error(file, nbfile, count, ret);
		return ;
	}
	ft_print_name(file, nbfile, count);
	option = pos - bts - 1;
	while (pos >= option)
	{
		read(fd, buf, 1);
	}
	while ((ret = read(fd, buf, 1)) > 0)
		ft_print_read(buf, ret);
}
