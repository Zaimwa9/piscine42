/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_illegal_offset.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 23:56:12 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/22 23:56:31 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_print_illegal_offset(char *file)
{
	ft_putstr("tail: illegal offset -- ");
	ft_putstr(file);
	ft_putchar('\n');
}
