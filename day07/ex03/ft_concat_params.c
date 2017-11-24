/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 10:15:29 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/16 17:43:02 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src, int t)
{
	int		i;
	int		size;
	int		tmp;

	i = 0;
	size = 0;
	while (dest[size])
		size++;
	tmp = size;
	if (t > 1)
		size = size + 1;
	while (src[i])
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	if (t > 1)
		dest[tmp] = '\n';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		size;
	char	*str;

	i = 1;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			size++;
			j++;
		}
		i++;
	}
	str = (char*)malloc(sizeof(char) * size + 1);
	i = 1;
	while (i < argc)
	{
		ft_strcat(str, argv[i], i);
		i++;
	}
	return (str);
}
