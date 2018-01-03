/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 19:39:06 by vguerand          #+#    #+#             */
/*   Updated: 2017/11/23 13:29:32 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_strlentab(char **str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (i < ft_strlentab(tab))
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
