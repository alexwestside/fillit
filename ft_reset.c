/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 12:31:09 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 18:57:11 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_reset(char **map, t_ts *block, int size_map)
{
	int x;
	int y;

	y = 0;
	while (y < size_map)
	{
		x = 0;
		while (x < size_map)
		{
			if (map[y][x] == block->name)
				map[y][x] = '.';
			x++;
		}
		y++;
	}
	return (map);
}
