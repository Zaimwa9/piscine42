/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 15:22:32 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/09 18:10:04 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str);

void	ft_rev_params(int argc, char **argv);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_rev_params(int argc, char **str)
{
	int j;
	int i;

	j = argc - 1;
	while (j > 0)
	{
		i = 0;
		while (i < ft_strlen(str[j]))
		{
			ft_putchar(str[j][i++]);
		}
		ft_putchar('\n');
		j--;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_rev_params(argc, argv);
	}
	return (0);
}
