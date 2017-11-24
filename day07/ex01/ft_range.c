/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 20:11:04 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/16 17:01:31 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int len;
	int *str;
	int i;

	i = 0;
	len = max - min - 1;
	if (min >= max)
		return (NULL);
	str = (int*)malloc(sizeof(*str) * len);
	while (min < max)
	{
		str[i] = min++;
		i++;
	}
	return (str);
}
