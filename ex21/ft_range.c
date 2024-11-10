/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:33:22 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/10/20 01:54:56 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*numbers;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	numbers = (int *) malloc(sizeof(int) * (max - min));
	if (numbers == NULL)
		return (NULL);
	else
	{
		while (min < max)
		{
			numbers[i] = min;
			min++;
			i++;
		}
	}
	return (numbers);
}

/*int	main(void)
{
	int	min = 1;
	int	max = 7;
	int	*numbers;
	int	i;

	i = 0;
	numbers = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d", numbers[i]);
		i++;
	}
	return (0);
}*/
