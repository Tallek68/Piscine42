/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mernst <>mernst@student.42mulhouse.fr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:40:49 by mernst            #+#    #+#             */
/*   Updated: 2022/09/04 22:24:09 by mernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	n;

	n = '0';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}
/*int	main(void)
{
	ft_print_numbers();
}*/
