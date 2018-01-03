/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 17:51:35 by vguerand          #+#    #+#             */
/*   Updated: 2017/11/23 15:47:11 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_replace(t_tetris *t, t_map map, int y, int x)
{
	map.map[y + t->htag[0][0]][x + t->htag[0][1]] = '.';
	map.map[y + t->htag[1][0]][x + t->htag[1][1]] = '.';
	map.map[y + t->htag[2][0]][x + t->htag[2][1]] = '.';
	map.map[y + t->htag[3][0]][x + t->htag[3][1]] = '.';
}

int		ft_place(t_tetris *t, t_map map, size_t y, size_t x)
{
	if (map.map[y + t->htag[0][0]][x + t->htag[0][1]] == '.' &&
			map.map[y + t->htag[1][0]][x + t->htag[1][1]] == '.' &&
			map.map[y + t->htag[2][0]][x + t->htag[2][1]] == '.' &&
			map.map[y + t->htag[3][0]][x + t->htag[3][1]] == '.')
	{
		map.map[y + t->htag[0][0]][x + t->htag[0][1]] = 'A' + t->count;
		map.map[y + t->htag[1][0]][x + t->htag[1][1]] = 'A' + t->count;
		map.map[y + t->htag[2][0]][x + t->htag[2][1]] = 'A' + t->count;
		map.map[y + t->htag[3][0]][x + t->htag[3][1]] = 'A' + t->count;
	}
	else
		return (0);
	return (1);
}

int		ft_solv(t_tetris *tetris, t_map map)
{
	int x;
	int y;

	if (tetris == NULL)
		return (1);
	y = 0;
	while (y <= map.size - tetris->size_y)
	{
		x = 0;
		while (x <= map.size - tetris->size_x)
		{
			if (ft_place(tetris, map, y, x))
			{
				if (ft_solv(tetris->next, map))
					return (1);
				else
					ft_replace(tetris, map, y, x);
			}
			x++;
		}
		y++;
	}
	return (0);
}
