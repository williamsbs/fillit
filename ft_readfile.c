/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:01:41 by wsabates          #+#    #+#             */
/*   Updated: 2017/11/23 13:34:04 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_readfile(int fd)
{
	int		ret;
	char	*buf;

	if (!(buf = (char *)malloc(sizeof(char) * (BUF_SIZE + 1))))
	{
		return (NULL);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	if (ret == -1)
	{
		ft_putstr("error\n");
		return (NULL);
	}
	return (buf);
}
