/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 23:49:22 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/23 00:26:24 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# define BUF_SIZE 1

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_print_name(char *str, int nbfile, int count);
void	ft_print_error(char *file, int nbfile, int count, int ret);
void	ft_print_illegal_offset(char *file);
void	ft_print_read(char *buf, int ret);
void	ft_print_read(char *buf, int ret);
void	ft_tail_file(char *file, int nbline, int count, int nbfile);
void	ft_tfo(char *file, int count, int nbfile, int bts);
int		main(int argc, char **argv);

#endif
