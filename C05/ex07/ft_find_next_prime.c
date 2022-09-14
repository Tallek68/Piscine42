/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mernst <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:31:15 by mernst            #+#    #+#             */
/*   Updated: 2022/09/11 18:31:16 by mernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;

	i = (int)nb - 1;
	if (nb <= 1)
		return (0);
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		ft_is_prime(nb);
		nb++;
	}
	return (nb);
}

/*int	main(void)
{
	printf("%d -> %d\n", -1868, ft_find_next_prime(-1868));
    printf("%d -> %d\n", 0, ft_find_next_prime(0));
    printf("%d -> %d\n", 1, ft_find_next_prime(1));
    printf("%d -> %d\n", 2, ft_find_next_prime(2));
    printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
    printf("%d -> %d\n", 648248, ft_find_next_prime(648248));
}*/