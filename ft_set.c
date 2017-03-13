/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 12:07:20 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 19:12:43 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_set(char **map, t_ts *block, int size_map)
{
	size_t	i;
	int		x;
	int		y;

	i = 0;
	y = 0;
	while (y < size_map)
	{
		x = 0;
		while (x < size_map)
		{
			if (block->x[i] == x && block->y[i] == y)
			{
				map[y][x] = block->name;
				i++;
			}
			x++;
		}
		map[y][x] = '\0';
		y++;
	}
	map[y] = NULL;
	return (map);
}
