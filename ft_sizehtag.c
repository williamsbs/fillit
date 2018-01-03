/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizehtag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 12:38:34 by vguerand          #+#    #+#             */
/*   Updated: 2017/11/23 14:02:30 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_max(int *tab, int size)
{
	int i;
	int max;

	i = 0;
	max = tab[0];
	while (i < size)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

void	ft_sizehtag(t_tetris *tetris)
{
	int y;
	int x;
	int tsize_x[4];
	int tsize_y[4];

	x = 0;
	while (x < 4)
	{
		tsize_x[x] = tetris->htag[x][1];
		x++;
	}
	y = 0;
	while (y < 4)
	{
		tsize_y[y] = tetris->htag[y][0];
		y++;
	}
	tetris->size_x = ft_max(tsize_x, 4) + 1;
	tetris->size_y = ft_max(tsize_y, 4) + 1;
}
