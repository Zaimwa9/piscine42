/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 10:17:16 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/17 12:14:51 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i] != '\r')
			size++;
		i++;
	}
	return (size);
}

int		ft_count_words(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\t' && str[i] != ' ' && str[i] != '\n')
		{
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
				i++;
			k++;
		}
		else
			i++;
	}
	return (k);
}

void	ft_extract_word(char *src, char **dest, int i, int k)
{
	char	*tabw;
	int		j;

	j = 0;
	while (src[i + j] != '\n' && src[i + j] != 9 &&
			src[i + j] != 32 && src[i + j] != '\r' && src[i + j] != '\0')
		j++;
	tabw = (char*)malloc(sizeof(char) * j + 1);
	j = 0;
	while (src[i + j] != '\n' && src[i + j] != 9 &&
			src[i + j] != 32 && src[i + j] != '\r' && src[i + j] != '\0')
	{
		tabw[j] = src[i + j];
		j++;
	}
	tabw[j] = '\0';
	dest[k] = &tabw[0];
	return ;
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		k;
	char	**dest;

	k = 0;
	i = 0;
	dest = (char**)malloc(sizeof(*dest) * ft_count_words(str) + 1);
	while (str[i] != '\0')
	{
		while (str[i] == '\n' || str[i] == 9 || str[i] == 32 || str[i] == '\r')
			i++;
		if (str[i] != '\n' && str[i] != 9 &&
				str[i] != 32 && str[i] != '\r' && str[i] != '\0')
			ft_extract_word(str, dest, i, k++);
		while (str[i] != '\n' && str[i] != 9 &&
				str[i] != 32 && str[i] != '\r' && str[i] != '\0')
			i++;
	}
	dest[k] = 0;
	return (dest);
}
