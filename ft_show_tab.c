/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 11:58:49 by dberger           #+#    #+#             */
/*   Updated: 2019/02/17 20:58:26 by dberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_show_tab(char **tab)
{
	int l;
	int c;

	l = 0;
	c = 0;
	while (l < 9)
	{
		while (tab[l][c] != '\0')
		{
			ft_putchar(tab[l][c]);
			ft_putchar(' ');
			c++;
		}
		c = 0;
		ft_putchar('\n');
		l++;
	}
}
