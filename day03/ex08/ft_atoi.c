/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 20:25:37 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/07 20:49:59 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int s;
	int result;

	i = 0;
	result = 0;
	s = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t')
			|| (str[i] == '\r') || (str[i] == '\v') || (str[i] == '\f'))
		i++;
	if (str[i] == 45)
		s = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		result *= 10;
		result += ((int)str[i] - 48);
		i++;
	}
	if (s == 1)
		return (-result);
	else
		return (result);
}
