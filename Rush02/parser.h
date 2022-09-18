/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:51:48 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/18 17:36:54 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

int			ft_nb_lines(char *str);
int			parse_key(char *str, int *i, t_dict_item *dict, int size_dict);
int			parse_value(char *str, int *i, t_dict_item *dict, int size_dict);
t_dict_item	*parser(char *str, int *size_dict);

#endif