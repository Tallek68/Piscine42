/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:18:46 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/18 16:48:56 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

typedef struct dict_item
{
	char	*key;
	int		key_len;
	char	*value;
	int		value_len;
}	t_dict_item;

int	ft_strlen(char *str);
int	atoi_to_r(char *str, int n);

#endif