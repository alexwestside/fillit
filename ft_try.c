/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_try.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 12:10:22 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 15:27:33 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_try(char **map, t_ts *block, int size_map)
{
	int		x;
	int		y;
	int		i;

	i = 0;
	y = 0;
	while (y < size_map)
	{
		x = 0;
		while (x < size_map)
		{
			if (block->x[i] == x && block->y[i] == y && map[y][x] != '.')
				return (0);
			else if (block->x[i] == x && block->y[i] == y)
				i++;
			x++;
		}
		y++;
	}
	if (i < 4)
		return (0);
	return (1);
}
