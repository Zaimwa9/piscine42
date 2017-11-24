/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 14:13:03 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/23 00:33:39 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# define BUF_SIZE 30
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_send_err(int err, char *file);
void	ft_display_file(char *file);
void	ft_display_pipe(int fd);
int		main(int argc, char **argv);

#endif
