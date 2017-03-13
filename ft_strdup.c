/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 12:05:22 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 11:45:45 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strdup(char *s1)
{
	char	*dup;

	dup = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	return (dup ? ft_strcpy(dup, s1) : NULL);
}
