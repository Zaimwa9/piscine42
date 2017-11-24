/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 23:57:29 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/24 10:37:55 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_tail_file(char *file, int nbline, int count, int nbfile)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];
	int		pos;

	fd = open(file, O_RDONLY, S_IRUSR);
	if ((ret = read(fd, buf, 1)) < 0)
	{
		ft_print_error(file, nbfile, count, ret);
		return ;
	}
	ft_print_name(file, nbfile, count);
	while (pos >= 0 && nbline <= 10)
	{
		read(fd, buf, 1);
		if (*buf == '\n')
			nbline++;
	}
	if (nbline < 10)
		ret = read(fd, buf, 1);
	while ((ret = read(fd, buf, 1)) > 0)
		ft_print_read(buf, ret);
}
