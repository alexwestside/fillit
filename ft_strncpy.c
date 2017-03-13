/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:44:56 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 11:43:17 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strncpy(char *dest, char *sorc, size_t len)
{
	char *d;
	char *s;

	d = (char *)dest;
	s = (char *)sorc;
	while (*s && len > 0)
	{
		*d++ = *s++;
		len--;
	}
	while (len > 0)
	{
		*d++ = '\0';
		--len;
	}
	return (dest);
}
