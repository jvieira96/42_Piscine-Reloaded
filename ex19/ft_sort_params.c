/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:14:26 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/10/20 01:48:56 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char l);
/*{
	write(1, &l, 1);
}*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort(int argc, char *argv[])
{
	int		i;
	int		k;
	char	*temp;

	i = 0;
	while (i < argc)
	{
		k = i + 1;
		while (k < argc)
		{
			if (ft_strcmp(argv[i], argv[k]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[k];
				argv[k] = temp;
			}
			k++;
		}
		k = 0;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	x = 0;
	i = 1;
	ft_sort(argc, argv);
	while (argc > i)
	{
		while (argv[i][x] != '\0')
		{
			ft_putchar(argv[i][x]);
			x++;
		}
		ft_putchar('\n');
		x = 0;
		i++;
	}
	return (0);
}
