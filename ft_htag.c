/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 19:07:03 by vguerand          #+#    #+#             */
/*   Updated: 2017/11/23 13:27:34 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_htag_enr(t_tetris *tetris)
{
	char	**tab;
	int		x;
	int		y;
	int		count_htag;

	tab = ft_strsplit(tetris->content, '\n');
	y = 0;
	count_htag = 0;
	while (y < 4 && count_htag < 4)
	{
		x = 0;
		while (x < 4 && count_htag < 4)
		{
			if (tab[y][x] == '#')
			{
				tetris->htag[count_htag][1] = x;
				tetris->htag[count_htag][0] = y;
				count_htag++;
			}
			x++;
		}
		y++;
	}
}
