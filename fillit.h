/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:20:17 by vguerand          #+#    #+#             */
/*   Updated: 2017/11/23 15:51:22 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FILLIT_H
# define _FILLIT_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"

# define BUF_SIZE 4096

typedef struct		s_map
{
	int			size;
	char		**map;
}					t_map;

typedef struct		s_tetris
{
	char			*content;
	int				htag[4][2];
	int				size_x;
	int				size_y;
	int				count;
	struct s_tetris	*next;
}					t_tetris;

void				ft_sizehtag(t_tetris *tetris);

void				ft_exit(int status);

int					ft_sqrt(int nb);

t_map				ft_mapdel(t_map map);

void				ft_print_words_tables(char **tab);

void				*ft_all_tetris(char *str, t_tetris *new_tetris);

void				ft_putleft(char *str);

size_t				ft_lstlen_tetris(t_tetris *lst);

int					ft_solv(t_tetris *tetris, t_map map);

t_map				ft_map(t_map map);

void				ft_putup(char *str);

t_tetris			*ft_putltr(t_tetris *new_tetris);

int					valid_input(char *s);

int					ft_checkform(char *str);

void				aff_structure(t_tetris *tetris);

int					ft_openfile(char *file);

char				*ft_readfile(int fd);

void				ft_htag_enr(t_tetris *tetris);

t_tetris			*ft_init_tetris(char *str, int start);

int					ft_closefile (int fd);

#endif
