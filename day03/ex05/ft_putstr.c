/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 15:48:36 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/06 15:12:09 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i++);
		ft_putchar(c);
	}
}