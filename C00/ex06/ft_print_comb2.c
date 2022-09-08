/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mernst <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:56:10 by mernst            #+#    #+#             */
/*   Updated: 2022/09/04 17:48:47 by mernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(int nb)
{
	int	nb1;
	int	nb2;

	nb1 = nb / 10 + 48;
	nb2 = nb % 10 + 48;
	write(1, &nb1, 1);
	write(1, &nb2, 1);
}

void	ft_print_comb2(void)
{
	int	a ;
	int	b ;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_num(a);
			write(1, " ", 1);
			ft_print_num(b);
			if (!(a == 98 && b == 99))
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

//int	main(void)
//{
//	ft_print_comb2();
//}
