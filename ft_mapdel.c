/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:57:03 by vguerand          #+#    #+#             */
/*   Updated: 2017/11/22 16:00:58 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	ft_mapdel(t_map map)
{
	int n;

	n = 0;
	while (n < map.size + 1)
	{
		free(map.map[n]);
		n++;
	}
	free(map.map);
	map.size += 1;
	return (map);
}
