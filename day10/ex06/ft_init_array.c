/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 14:30:52 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/23 14:31:11 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	init(t_op *ftop)
{
	ftop[0].type = '+';
	ftop[0].f = ft_sum;
	ftop[1].type = '-';
	ftop[1].f = ft_substraction;
	ftop[2].type = 42;
	ftop[2].f = ft_multiply;
	ftop[3].type = '/';
	ftop[3].f = ft_divide;
	ftop[4].type = '%';
	ftop[4].f = ft_modulo;
}
