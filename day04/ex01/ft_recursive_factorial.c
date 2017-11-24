/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 22:08:04 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/07 19:17:21 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb);

int		ft_recursive_factorial(int nb)
{
	int result;

	result = 1;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb > 1)
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
