/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:04:27 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/10 13:46:02 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_program_name(int argc, char **argv);

int		ft_strlength(char *str);

int		ft_strlength(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_print_program_name(int argc, char **argv)
{
	int i;
	int size;

	i = 0;
	size = ft_strlength(*argv);
	if (argc == 1)
	{
		while (i < size)
			ft_putchar(argv[0][i++]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	ft_print_program_name(argc, argv);
	return (0);
}
