/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 15:06:34 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/09 18:09:08 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(int argc, char **argv);

int		ft_strlen(char *str);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_print_params(int argc, char **argv)
{
	int i;
	int j;

	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			i = 0;
			while (i < ft_strlen(argv[j]))
			{
				ft_putchar(argv[j][i++]);
			}
			ft_putchar('\n');
			j++;
		}
	}
}

int		main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}
