/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:08:30 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/15 22:31:53 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	temp;
	unsigned int	i;

	i = 0;
	temp = 0;
	while (i <= n)
	{
		if (s1[i] == s2[i])
			temp++;
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (temp == n)
		return (0);
	return (0);
}
