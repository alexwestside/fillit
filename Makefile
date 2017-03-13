#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/10 16:20:22 by orizhiy           #+#    #+#              #
#    Updated: 2016/12/17 13:56:30 by orizhiy          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

G = gcc

FLAG = -Wall -Wextra -Werror

DEL = rm -rf

HDR = fillit.h

OBJ = $(SRC:.c=.o)

PATH = /bin/

SRC = 	main.c \
		ft_error.c \
		ft_is_error.c \
		ft_read.c \
		ft_strdup.c \
		ft_strndup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strlen.c \
		ft_store.c \
		ft_check_1.c \
		ft_check_2.c \
		ft_coord_x_y.c \
		ft_strsplit.c \
		ft_count_words.c \
		ft_len_char.c \
		ft_coord_block.c \
		ft_fill_map.c \
		ft_size_map.c \
		ft_algoritm.c \
		ft_solution.c \
		ft_try.c \
		ft_set.c \
		ft_reset.c \
		ft_coord_new.c \
		ft_putendl.c \
		ft_putstr.c \
		ft_putchar.c

all: $(NAME)

$(NAME) : $(OBJ)
		$(G) $(FLAG) $(OBJ) -o $(NAME)
		@echo FILLIT is ALIVE!!!

%.o: %.c
		$(G) $(FLAG) -c $<

clean:
		$(DEL) $(OBJ)
		@echo OBJ is DEAD!!!

fclean: clean
		$(DEL) $(NAME)
		@echo FILLIT is DESTROYED!!!

re: fclean all
		@echo ALL DAMM FPS is DESTROYED!!!

rmsh:
		rm *~
		rm \#*
		rm *.out