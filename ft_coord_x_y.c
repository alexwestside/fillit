/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coord_x_y.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 12:22:17 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 19:03:46 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_ts		*ft_coord_x_y(t_ts *block)
{
	t_ts *tmp;

	tmp = block;
	while (block->next)
	{
		block = ft_coord_block(block, ft_strsplit(block->s, '\n'));
		free(block->s);
		block = block->next;
	}
	return (tmp);
}
