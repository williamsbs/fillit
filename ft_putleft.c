/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putleft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 17:32:53 by vguerand          #+#    #+#             */
/*   Updated: 2017/11/23 13:33:17 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_putleft(char *str)
{
	int i;
	int j;
	int pt5;
	int pt10;
	int pt15;

	i = 0;
	pt5 = 5;
	pt10 = 10;
	pt15 = 15;
	while (str[i] == '.' && str[i + pt5] == '.' && str[i + pt10] == '.'
			&& str[i + pt15] == '.')
		i++;
	j = 0;
	while (j < 20)
	{
		if (str[j] == '#' && i != 0)
		{
			str[j - i] = str[j];
			str[j] = '.';
		}
		j++;
	}
}
