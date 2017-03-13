/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 19:20:23 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 18:52:13 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_solution(t_ts *block, char **map, int size_map)
{
	int		x;
	int		y;
	char	**tmp;

	tmp = NULL;
	if (block->next == NULL)
		return (map);
	y = 0;
	while (y < size_map)
	{
		x = 0;
		while (x < size_map)
		{
			block = ft_coord_new(block, x, y);
			if (ft_try(map, block, size_map))
				tmp = ft_solution(block->next,
							ft_set(map, block, size_map), size_map);
			if (tmp)
				return (tmp);
			map = ft_reset(map, block, size_map);
			++x;
		}
		++y;
	}
	return (NULL);
}
