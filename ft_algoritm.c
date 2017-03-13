/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algoritm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 13:44:36 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 19:08:20 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_algoritm(t_ts *block, int size_map)
{
	char **map;

	map = NULL;
	while (!map)
	{
		if (!(map = (char **)malloc(sizeof(char *) * (size_map + 1))))
			return (NULL);
		map = ft_fill_map(map, size_map);
		map = ft_solution(block, map, size_map);
		size_map++;
	}
	return (map);
}
