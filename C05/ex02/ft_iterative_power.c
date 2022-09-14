/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mernst <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:29:16 by mernst            #+#    #+#             */
/*   Updated: 2022/09/11 18:29:17 by mernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		res *= nb;
		power --;
	}
	return (res);
}

/*int	main(void)
{
	printf("4 ^3 = %d\n", ft_iterative_power(4, 3));
	printf("4 ^2 = %d\n", ft_iterative_power(4, 2));
	printf("0 ^0 = %d\n", ft_iterative_power(0, 0));
	printf("1 ^-1 = %d\n", ft_iterative_power(1, -1));
	printf("-4 ^-2 = %d\n", ft_iterative_power(-4, -2));
}*/
