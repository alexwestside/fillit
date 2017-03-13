/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 14:19:05 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 11:45:24 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strcpy(char *dest, char *sorc)
{
	char *d;
	char *s;

	d = dest;
	s = (char *)sorc;
	while (*s)
		*d++ = *s++;
	*d++ = '\0';
	return (dest);
}