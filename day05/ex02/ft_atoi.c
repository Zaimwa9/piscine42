/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 18:06:32 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/14 16:41:57 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);

int		ft_atoi(char *str)
{
	int i;
	int s;
	int result;

	result = 0;
	i = 0;
	s = 1;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == '\b' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		s = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] <= 57 && str[i] >= 48)
		result = result * 10 + (str[i++] - 48);
	return (result * s);
}
