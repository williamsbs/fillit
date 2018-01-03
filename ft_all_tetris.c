/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_tetris.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 09:59:20 by vguerand          #+#    #+#             */
/*   Updated: 2017/11/23 13:58:07 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	*ft_all_tetris(char *str, t_tetris *header_tetris)
{
	t_tetris		*tetris;
	t_tetris		*tmp_tetris;
	int				count_tetris;
	int				n;

	n = 0;
	count_tetris = 0;
	tetris = ft_init_tetris(str, n);
	n += 21;
	tetris->count = count_tetris++;
	header_tetris = tetris;
	while (str[n])
	{
		tmp_tetris = ft_init_tetris(str, n);
		n += 21;
		tmp_tetris->count = count_tetris++;
		tetris->next = tmp_tetris;
		tetris = tetris->next;
	}
	tetris->next = NULL;
	return (header_tetris);
}
