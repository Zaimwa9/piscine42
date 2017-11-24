/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 13:58:45 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/07 14:09:49 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index);

int		ft_fibonacci(int index)
{
	int result;

	result = 0;
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	result = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (result);
}
