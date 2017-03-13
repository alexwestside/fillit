/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 17:10:33 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 19:13:21 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_fill_map(char **str, int size_map)
{
	char	*p;
	int		i;
	int		flag;

	i = 0;
	while (i < size_map)
	{
		flag = size_map;
		if (!(str[i] = (char *)malloc(sizeof(char) * (size_map + 1))))
			ft_is_error();
		p = str[i];
		while (flag-- > 0)
			*p++ = '.';
		str[i][size_map] = '\0';
		i++;
	}
	str[i] = 0;
	return (str);
}
