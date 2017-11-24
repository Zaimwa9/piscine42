/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 22:16:11 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/07 12:13:48 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power);

int		ft_recursive_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	if (power > 1)
		result = nb * ft_recursive_power(nb, power - 1);
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	return (result);
}
