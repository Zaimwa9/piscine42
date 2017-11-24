/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:18:26 by wzaim             #+#    #+#             */
/*   Updated: 2017/08/15 17:50:32 by wzaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_params(int argc, char **argv);

int		ft_strlen(char *str);

void	ft_swap_arrays(char **argv, int i);

int		ft_strcmp(char *str1, char *str2);

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_swap_arrays(char **argv, int i)
{
	char *tmp;

	tmp = &argv[i][0];
	argv[i] = &argv[i + 1][0];
	argv[i + 1] = &tmp[0];
}

int		ft_strcmp(char *str1, char *str2)
{
	int sizecmp;
	int i;

	i = 0;
	if (ft_strlen(str1) >= ft_strlen(str2))
	{
		sizecmp = ft_strlen(str2);
	}
	else
		sizecmp = ft_strlen(str1);
	while (i <= sizecmp)
	{
		if (str1[i] == str2[i])
			i++;
		if (str1[i] != str2[i])
			return ((unsigned int)str2[i] - (unsigned int)str1[i]);
	}
	return (0);
}

void	ft_sort_params(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i <= argc - 1)
	{
		j = 1;
		while (j <= argc - 2)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) < 0)
				ft_swap_arrays(argv, j);
			j++;
		}
		i++;
	}
	i = 1;
	while (i <= argc - 1)
	{
		j = 0;
		while (argv[i][j] != '\0')
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc >= 1)
		ft_sort_params(argc, argv);
	return (0);
}
