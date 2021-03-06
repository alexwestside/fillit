/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 16:27:25 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 11:43:48 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_count_words(char *s, char c)
{
	char	*p;
	int		cw;

	cw = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		p = (char *)s;
		while (*p != c && *p)
			p++;
		(*s != c && *s) ? cw++ : 0;
		s = p;
	}
	return (cw);
}
