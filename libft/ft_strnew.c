/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:51:53 by vguerand          #+#    #+#             */
/*   Updated: 2017/11/13 16:49:43 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*copy;

	i = 0;
	if (!(copy = ft_memalloc(size + 1)))
	{
		return (NULL);
	}
	while (i < size)
	{
		copy[i] = '\0';
		i++;
	}
	return (copy);
}
