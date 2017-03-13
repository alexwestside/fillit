/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 16:45:56 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/17 19:00:24 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*ft_read(char *s)
{
	int		fd;
	int		rd_status;
	char	buf[1];
	char	tmp[546];
	int		i;

	i = 0;
	if ((fd = open(s, O_RDONLY)) == -1)
		ft_is_error();
	while ((rd_status = read(fd, buf, 1)))
	{
		if (i > 546)
			ft_is_error();
		tmp[i++] = buf[0];
	}
	tmp[i] = '\0';
	if (close(fd) == -1)
		ft_is_error();
	return (ft_strdup(tmp));
}
