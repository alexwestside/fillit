/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 18:10:00 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 18:22:04 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_strsplit(char *s, char c)
{
	char	**res;
	char	*p1;
	char	**p2;

	if (!s || !(res = (char **)malloc(sizeof(char*)
								* (ft_count_words(s, c) + 1))))
		return (NULL);
	p2 = res;
	while (*s)
	{
		while (*s == c && *s && s++)
			;
		if (*s)
		{
			if (!(p1 = (char *)malloc(ft_len_char(s, c) + 1)))
				return (NULL);
			*res = p1;
			while (*s != c && *s && (*p1++ = *s++))
				;
			*p1 = '\0';
			res++;
		}
	}
	*res = NULL;
	return (p2);
}
