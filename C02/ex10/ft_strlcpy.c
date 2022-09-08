/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mernst <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:51:16 by mernst            #+#    #+#             */
/*   Updated: 2022/09/08 12:20:39 by mernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
		count ++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size -1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}
/*int main (void)
{
	char src[] = "ordinateur";
	char dest[] = "voiture";
	ft_strlcpy(dest, src, 7);
	printf("%s, %d", dest, ft_strlcpy(dest, src, 7));
}*/
