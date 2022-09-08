/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mernst <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:03:29 by mernst            #+#    #+#             */
/*   Updated: 2022/09/06 14:00:05 by mernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	premiereligne(int x, int i);
void	milieuligne(int x, int i);
void	derniereligne(int x, int i);

void	rush(int x, int y)
{
	int	i;
	i = 0;
	if (x < 1 || y < 1)
	{
		return ;
	}
	premiereligne(x, y);
	if (y > 1)
	{
		while (i < y - 2)
		{	
			milieuligne(x, y);
			i++;
		}
	}
	if (y > 1)
		derniereligne(x, y);
}

void	premiereligne(int x, int i)

{	
	i = 0;
	ft_putchar('/');
	while (i <= x - 3)
	{	
		ft_putchar('*');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	milieuligne(int x, int i)
{
	i = 0;
	ft_putchar('*');
	while (i <= x - 3)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	derniereligne(int x, int i)
{
	i = 0;
	ft_putchar('\\');
	while (i <= x - 3)
	{
		if (x > 1)
		{
			ft_putchar('*');
		}
		i++;
	}
	if (x > 1)
		ft_putchar('/');
	ft_putchar('\n');
}
