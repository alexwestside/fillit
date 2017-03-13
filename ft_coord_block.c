/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coord_block.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 12:43:23 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 19:06:10 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_ts	*ft_coord_block(t_ts *block, char **s)
{
	int i;
	int x;
	int y;

	i = 0;
	y = 0;
	while (s[y])
	{
		x = 0;
		while (s[y][x])
		{
			if (s[y][x] == '#')
			{
				block->x[i] = x;
				block->y[i] = y;
				i++;
			}
			x++;
		}
		y++;
	}
	return (block);
}
