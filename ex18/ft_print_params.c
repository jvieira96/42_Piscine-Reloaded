/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:59:20 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/10/20 01:46:52 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char l);
/*{
	write(1, &l, 1);
}*/

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	x = 0;
	i = 1;
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
}
