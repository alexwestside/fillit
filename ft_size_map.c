/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 13:45:12 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/20 16:51:43 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_size_map(t_ts *block)
{
	int	n;
	int size_map;

	size_map = 2;
	n = 0;
	while (block->next)
	{
		n++;
		block = block->next;
	}
	while (size_map * size_map < n * 4)
		size_map++;
	return (size_map);
}
