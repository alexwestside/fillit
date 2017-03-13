/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coord_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 13:35:43 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 19:05:22 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_ts	*ft_coord_new(t_ts *block, int x, int y)
{
	int min_x;
	int min_y;
	int i;

	i = 0;
	min_x = block->x[i];
	min_y = block->y[i];
	while (i != 4)
	{
		if (block->x[i] < min_x)
			min_x = block->x[i];
		if (block->y[i] < min_y)
			min_y = block->y[i];
		i++;
	}
	i = 0;
	while (i != 4)
	{
		block->x[i] = block->x[i] - min_x + x;
		block->y[i] = block->y[i] - min_y + y;
		i++;
	}
	return (block);
}
