/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkform.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:53:37 by vguerand          #+#    #+#             */
/*   Updated: 2017/11/23 14:45:21 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_norm_checkform(char **tab, int y, int x, int lien)
{
	if (tab[y][x] == '#')
	{
		if (y != 0)
		{
			if (tab[y - 1][x] == '#')
				lien++;
		}
		if (y != 3)
		{
			if (tab[y + 1][x] == '#')
				lien++;
		}
		if (x != 3)
		{
			if (tab[y][x + 1] == '#')
				lien++;
		}
		if (x != 0)
		{
			if (tab[y][x - 1] == '#')
				lien++;
		}
	}
	return (lien);
}

int		ft_checkform(char *str)
{
	char	**tab;
	int		y;
	int		x;
	int		lien;

	tab = ft_strsplit(str, '\n');
	y = 0;
	lien = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			lien = ft_norm_checkform(tab, y, x, lien);
			x++;
		}
		y++;
	}
	if (lien == 6)
		return (1);
	else if (lien == 8)
		return (1);
	ft_exit(0);
	return (0);
}
