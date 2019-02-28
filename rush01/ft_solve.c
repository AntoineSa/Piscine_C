/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 19:47:31 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/19 13:53:46 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int			ft_solve(char **tab)
{
	char	n;
	int		l;
	int		c;

	n = '1';
	l = 0;
	c = 0;
	if (ft_find_empty(&l, &c, tab) == 0)
		return (1);
	while (n <= '9')
	{
		if (ft_check_conflict(l, c, n, tab) == 1)
		{
			tab[l][c] = n;
			if (ft_solve(tab) == 1)
				return (1);
			tab[l][c] = '.';
		}
		n++;
	}
	return (0);
}
