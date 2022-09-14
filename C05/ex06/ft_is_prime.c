/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mernst <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:30:47 by mernst            #+#    #+#             */
/*   Updated: 2022/09/11 18:30:48 by mernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

/*int	main(void)

{
	printf("%d \n", ft_is_prime(-10));
	printf("%d \n", ft_is_prime(1));
	printf("%d \n", ft_is_prime(5));
	printf("%d \n", ft_is_prime(0));
	printf("%d \n", ft_is_prime(2147483647));
}*/
