/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 19:20:26 by vguerand          #+#    #+#             */
/*   Updated: 2017/11/23 13:14:32 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	ft_map(t_map map)
{
	int n;

	if (!(map.map = (char**)malloc(sizeof(char*) * map.size + 1)))
		ft_exit(0);
	n = 0;
	while (n < map.size)
	{
		if (!(map.map[n] = ft_memalloc(map.size)))
			ft_exit(0);
		map.map[n] = ft_memset(map.map[n], '.', map.size);
		n++;
	}
	map.map[n] = NULL;
	return (map);
}
