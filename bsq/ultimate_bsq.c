/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ultimate_bsq.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfalkau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 08:58:31 by lfalkau           #+#    #+#             */
/*   Updated: 2019/02/27 20:45:37 by lfalkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		ultimate_bsq(char **map, char *charset, t_size map_size)
{
	t_square	final_sq;

	final_sq = search_square(map, charset, map_size);
	fill_square(map, charset, final_sq);
	print_map(map);
}

t_square	search_square(char **map, char *charset, t_size sz)
{
	int			**map_copy;
	t_comp		d;
	t_square	sq;
	int			i;
	int			j;

	set_square(&sq, 0, 0, 0);
	map_copy = copy_map(map, sz, charset);
	i = 0;
	while (++i < sz.h)
	{
		j = 0;
		while (++j < sz.w)
			if (map[i][j] == charset[0])
			{
				d.left = map_copy[i][j - 1];
				d.top = map_copy[i - 1][j];
				d.diag = map_copy[i - 1][j - 1];
				map_copy[i][j] = min_value(d.left, d.top, d.diag) + 1;
				if (map_copy[i][j] > sq.size)
					set_square(&sq, i, j, map_copy[i][j]);
			}
	}
	return (sq);
}

int			**copy_map(char **map, t_size map_size, char *charset)
{
	int	**map_copy;
	int	i;
	int j;

	if (!(map_copy = malloc(sizeof(int*) * map_size.h)))
		return (NULL);
	i = -1;
	while (++i < map_size.h)
	{
		if (!(map_copy[i] = malloc(sizeof(int) * map_size.w)))
			return (NULL);
	}
	i = -1;
	while (++i < map_size.h)
	{
		j = -1;
		while (++j < map_size.w)
		{
			if (map[i][j] == charset[0])
				map_copy[i][j] = (i == 0 || j == 0) ? 1 : 0;
			else if (map[i][j] == charset[1])
				map_copy[i][j] = -1;
		}
	}
	return (map_copy);
}

void		fill_square(char **map, char *charset, t_square square)
{
	int i;
	int j;

	if ((square.size <= 1) && try_to_fill_first_line(map, charset))
		return ;
	i = 0;
	while (i < square.size)
	{
		j = 0;
		while (j < square.size)
		{
			map[i + square.y][j + square.x] = charset[2];
			j++;
		}
		i++;
	}
}

int			min_value(int left, int top, int diag)
{
	if (left < top)
		top = left;
	if (top < diag)
		diag = top;
	return ((diag >= 0) ? diag : 0);
}
