/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mernst <>mernst@student.42mulhouse.fr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:40:52 by mernst            #+#    #+#             */
/*   Updated: 2022/09/04 17:47:16 by mernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_put_char ('P');
	}
	else
	{
		ft_put_char ('N');
	}
}

//int main(void)
//{
//	ft_is_negative(5);
//}
