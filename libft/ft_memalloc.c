/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:46:18 by vguerand          #+#    #+#             */
/*   Updated: 2017/11/10 19:37:52 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	if (size == 0)
		return (NULL);
	p = malloc(size);
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
