/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 18:58:32 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 20:07:56 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_check_2(char *s)
{
	int		touch;
	int		i;

	touch = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '#' && s[i + 1] == '#')
			touch++;
		if (s[i] == '#' && ((i - 1) >= 0) && s[i - 1] == '#')
			touch++;
		if (s[i] == '#' && ((i + 5) <= 20) && s[i + 5] == '#')
			touch++;
		if (s[i] == '#' && ((i - 5) >= 0) && s[i - 5] == '#')
			touch++;
		i++;
	}
	if (touch < 6)
		ft_is_error();
	return (1);
}