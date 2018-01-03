/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_openfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:03:25 by wsabates          #+#    #+#             */
/*   Updated: 2017/11/16 14:54:56 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_openfile(char *files)
{
	int	fd;

	fd = open(files, O_RDONLY);
	if (fd == -1)
		ft_putstr("error\n");
	return (fd);
}
