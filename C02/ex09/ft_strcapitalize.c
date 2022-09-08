/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mernst <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:46:50 by mernst            #+#    #+#             */
/*   Updated: 2022/09/08 14:54:01 by mernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

/*void	ft_putchar(int a)
{
	printf("%c", a);
}*/

char	*ft_minuscule(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	u;

	ft_minuscule(str);
	u = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (u == 1 && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
			u = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			u = 0;
		}		
		else if (str[i] < 97 || str[i] > 123)
		{
			u = 1;
		}
	i++;
	}
	return (str);
}
/*int main(void)
{
	char str[100] = "cECEDi 1est 1 *te1st";

	printf("%s", ft_strcapitalize(str));
}*/
