/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_store.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 18:56:27 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 14:41:23 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_ts		*ft_store(char *s)
{
	t_ts	*block;
	t_ts	*tmp;
	char	c;
	int		i;
	int		n;

	i = 0;
	c = 'A';
	n = ft_check_1(s);
	if (!(block = (t_ts *)malloc(sizeof(t_ts))))
		return (NULL);
	tmp = block;
	while (n-- > 0)
	{
		tmp->name = c++;
		tmp->s = ft_strndup(&s[i], 20);
		ft_check_2(tmp->s);
		i = i + 21;
		if (!(tmp->next = (t_ts *)malloc(sizeof(t_ts))))
			return (NULL);
		tmp = tmp->next;
	}
	tmp->next = NULL;
	return (block);
}
