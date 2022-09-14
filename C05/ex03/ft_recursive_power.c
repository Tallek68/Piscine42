/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mernst <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:29:36 by mernst            #+#    #+#             */
/*   Updated: 2022/09/11 18:29:38 by mernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (n > n * nb)
		return (0);
	else if (power > 1)
		return (n * ft_recursive_power(n, power -1));
	else if (power == 0)
		return (1);
	else if (power < 1)
		return (0);
	else
		return (n);
}

/*int	main(void)
{
	printf("4 ^3 = %d\n", ft_recursive_power(4, 3));
	printf("4 ^2 = %d\n", ft_recursive_power(4, 2));
	printf("5 ^-5 = %d\n", ft_recursive_power(5, 5));
	printf("0 ^0 = %d\n", ft_recursive_power(0, 0));
	printf("-4 ^5 = %d\n", ft_recursive_power(-4, 5));
}*/
