/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 18:18:53 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 19:11:40 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			main(int ac, char **av)
{
	t_ts	*block;
	char	*read;
	char	**map;
	int		size_map;

	if (ac != 2)
		ft_error();
	read = ft_read(av[1]);
	block = ft_store(read);
	block = ft_coord_x_y(block);
	size_map = ft_size_map(block);
	map = ft_algoritm(block, size_map);
	free(block);
	while (*map)
		ft_putendl(*map++);
	return (0);
}
