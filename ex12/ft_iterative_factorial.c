/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:51:42 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/10/14 13:51:44 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	nbr;

	nbr = nb;
	nb = nb - 1;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		return (0);
	while (nb > 0)
	{
		nbr = nbr * nb;
		nb--;
	}
	return (nbr);
}

/*int	main(void)
{
	printf("%d", ft_iterative_factorial(8));
	return (0);
}*/
