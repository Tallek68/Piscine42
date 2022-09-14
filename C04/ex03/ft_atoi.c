/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mernst <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:58:20 by mernst            #+#    #+#             */
/*   Updated: 2022/09/11 17:30:10 by mernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	c;

	res = 0;
	sign = 1;
	c = 0;
	while (str[c] == 32 || (str[c] >= 9 && str[c] <= 13))
		c++;
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
		sign *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (res * 10) + str[c] - '0';
		c++;
	}
	return (res * sign);
}

int	main(void)
{
	printf ("%d\n", ft_atoi("         ----+---+2147--+-ab567"));
}
