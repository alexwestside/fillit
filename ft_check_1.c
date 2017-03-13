/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 19:06:31 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 20:16:01 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_1(char *s)
{
	int		hash;
	int		dot;
	int		end;
	char	*p;

	hash = 0;
	dot = 0;
	end = 0;
	p = s;
	while (*s)
	{
		*s == '#' ? hash++ : 0;
		*s == '.' ? dot++ : 0;
		*s == '\n' ? end++ : 0;
		if (((s - p) + 1) % 21 == 0 && *s != '\n')
			ft_is_error();
		s++;
	}
	if (hash < 4)
		ft_is_error();
	if (hash % 4 || dot % 4 || dot / hash != 3 || (end + 1) % 5)
		ft_is_error();
	return (hash / 4);
}
