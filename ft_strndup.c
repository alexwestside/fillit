/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 13:01:03 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 18:51:20 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strndup(char *sorc, size_t n)
{
	char *dup;

	if (!(dup = (char *)malloc(sizeof(char) * n)))
		return (NULL);
	dup = ft_strncpy(dup, sorc, n);
	dup[n] = '\0';
	return (dup);
}
