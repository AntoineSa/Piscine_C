/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 14:51:11 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/17 22:06:16 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int argc, char **argv)
{
	if (ft_check_input(argc, argv + 1) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (ft_solve(argv + 1) == 1)
		ft_show_tab(argv + 1);
	else
		ft_putstr("Error\n");
	return (0);
}
