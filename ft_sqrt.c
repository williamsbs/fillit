/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 16:23:20 by vguerand          #+#    #+#             */
/*   Updated: 2017/11/22 16:23:32 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sqrt(int nb)
{
	int i;
	int e;

	if (nb == 1)
	{
		return (1);
	}
	i = 2;
	if (nb <= 16)
		e = 1;
	else
		e = 4;
	while (i < nb / e)
	{
		if (nb == i)
		{
			return (0);
		}
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
