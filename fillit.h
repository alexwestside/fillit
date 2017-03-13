/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 16:11:42 by orizhiy           #+#    #+#             */
/*   Updated: 2016/12/19 19:14:15 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>

typedef	struct	s_ts
{
	char		name;
	char		*s;
	int			x[4];
	int			y[4];
	struct s_ts	*next;
}				t_ts;

void			ft_is_error(void);
void			ft_error(void);
char			*ft_read(char *s);
char			*ft_strdup(char *s1);
char			*ft_strndup(char *sorc, size_t n);
char			*ft_strcpy(char *dest, char *sorc);
char			*ft_strncpy(char *dest, char *sorc, size_t len);
size_t			ft_strlen(char *s);
t_ts			*ft_store(char *s);
int				ft_check_1(char *s);
int				ft_check_2(char *s);
t_ts			*ft_coord_x_y(t_ts *block);
char			**ft_strsplit(char *s, char c);
int				ft_count_words(char *s, char c);
size_t			ft_len_char(char *s, char c);
t_ts			*ft_coord_block(t_ts *block, char **s);
char			**ft_fill_map(char **str, int size);
int				ft_size_map(t_ts *block);
char			**ft_algoritm(t_ts *block, int size);
char			**ft_solution(t_ts *block, char **map, int size_map);
int				ft_try(char **map, t_ts *block, int size_map);
char			**ft_set(char **map, t_ts *block, int size_map);
char			**ft_reset(char **map, t_ts *block, int size_map);
t_ts			*ft_coord_new(t_ts *block, int x, int y);
void			ft_putendl(char *s);
void			ft_putstr(char *s);
void			ft_putchar(char c);

#endif
