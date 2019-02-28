/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 20:22:52 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/25 11:26:05 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *new_link;
	if (ac < 0)
	{
		new_link = ft_create_elem(av[ac--]);
		new_link->next = ft_list_push_params(ac, av);
	}
	else
		new_link = NULL;
	return (new_link);
}
