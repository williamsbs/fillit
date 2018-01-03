/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_aff.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:18:47 by wsabates          #+#    #+#             */
/*   Updated: 2017/11/23 15:48:16 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	main_solv(t_tetris *header_tetris, t_map map)
{
	map = ft_map(map);
	while (!(ft_solv(header_tetris, map)))
	{
		map = ft_mapdel(map);
		map = ft_map(map);
	}
	ft_print_words_tables(map.map);
}

int		main_norm(char *buf, t_tetris *header_tetris)
{
	int i;
	int number_tetris;
	int map_size;
	int size_buf;

	size_buf = ft_strlen(buf);
	number_tetris = ft_lstlen_tetris(header_tetris);
	i = number_tetris * 4;
	while (!(map_size = ft_sqrt(i)))
		i++;
	if (size_buf != 21 * number_tetris - 1)
		ft_exit(0);
	return (map_size);
}

int		main(int argc, char **argv)
{
	int			fd;
	char		*buf;
	t_map		map;
	t_tetris	*header_tetris;

	if (!(header_tetris = (t_tetris*)malloc(sizeof(t_tetris))))
		return (1);
	if (argc != 2)
		ft_putstr("usage : fillit\n");
	else
	{
		if ((fd = ft_openfile(argv[1])) == -1)
			return (1);
		if (!(buf = ft_readfile(fd)))
			return (1);
		if (ft_closefile(fd) == -1)
			return (1);
		if (!(header_tetris = ft_all_tetris(buf, header_tetris)))
			return (1);
		map.size = main_norm(buf, header_tetris);
		main_solv(header_tetris, map);
	}
	return (0);
}
