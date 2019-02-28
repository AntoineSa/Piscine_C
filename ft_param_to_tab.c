/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 19:15:02 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/21 13:56:44 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct	s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par *par;

	i = 0;
	par = (struct s_stock_par*)malloc(sizeof(struct s_stock_par) * ac + 1);
	while (i < ac)
	{
		par[i].size_param = ft_strlen(av[i]);
		par[i].str = &av[i][0];
		par[i].copy = av[i];
		par[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	par[i].str = 0;
	return (par);
}
