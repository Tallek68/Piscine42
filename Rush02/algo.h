/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:11:00 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/18 18:22:26 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_H
# define ALGO_H

void	ft_calcule(char **str_nb, t_dict_item *dict, int n, int u);
void	atoi_str(char **str);
int		verif(char *str);
void	algo(char *str_nb, t_dict_item *dict);

#endif