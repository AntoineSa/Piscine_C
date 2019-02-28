/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 12:25:10 by dberger           #+#    #+#             */
/*   Updated: 2019/02/17 22:05:50 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_check_input(int nb, char **tab)
{
	int l;
	int c;

	l = 0;
	if (nb != 10)
		return (0);
	while (tab[l] != '\0')
	{
		c = 0;
		while (tab[l][c] != '\0')
		{
			if (!((tab[l][c] >= '1' && tab[l][c] <= '9') || tab[l][c] == '.'))
				return (0);
			else if (tab[l][c] >= '1' && tab[l][c] <= '9')
			{
				if (ft_check_conflict(l, c, tab[l][c], tab) == 0)
					return (0);
			}
			c++;
		}
		if (c != 9)
			return (0);
		l++;
	}
	return (l == 9 ? 1 : 0);
}
