/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_conflict.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 13:56:29 by dberger           #+#    #+#             */
/*   Updated: 2019/02/17 22:05:35 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_check_line(int l, int c, char n, char **tab)
{
	int l2;

	l2 = 0;
	while (l2 < 9)
	{
		if (n == tab[l2][c] && l != l2)
			return (0);
		l2++;
	}
	return (1);
}

int		ft_check_column(int l, int c, char n, char **tab)
{
	int c2;

	c2 = 0;
	while (c2 < 9)
	{
		if (n == tab[l][c2] && c != c2)
			return (0);
		c2++;
	}
	return (1);
}

int		ft_check_conflict(int l, int c, char n, char **tab)
{
	int		l2;
	int		c2;
	int		box_l;
	int		box_c;

	box_l = (l / 3) * 3;
	box_c = (c / 3) * 3;
	c2 = box_c;
	l2 = box_l;
	if (ft_check_line(l, c, n, tab) == 0 ||
			ft_check_column(l, c, n, tab) == 0)
		return (0);
	while (c2 <= box_c + 2)
	{
		while (l2 <= box_l + 2)
		{
			if (n == tab[l2][c2] && l2 != l && c2 != c)
				return (0);
			l2++;
		}
		l2 = box_l;
		c2++;
	}
	return (1);
}
