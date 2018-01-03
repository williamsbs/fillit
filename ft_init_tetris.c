/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tetris.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 09:59:58 by vguerand          #+#    #+#             */
/*   Updated: 2017/11/23 15:51:42 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetris	*ft_init_tetris(char *str, int start)
{
	t_tetris *new_tetris;

	if (!(new_tetris = (t_tetris*)malloc(sizeof(t_tetris))))
		ft_exit(0);
	if (!(new_tetris->content = ft_strsub(str, start, 20)))
		ft_exit(0);
	if (valid_input(new_tetris->content) == 0)
		ft_exit(0);
	if (ft_checkform(new_tetris->content) == 0)
		ft_exit(0);
	ft_putleft(new_tetris->content);
	ft_putup(new_tetris->content);
	ft_htag_enr(new_tetris);
	ft_sizehtag(new_tetris);
	return (new_tetris);
}
