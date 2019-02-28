/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 19:06:15 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/25 11:01:28 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_ftront(t_list **begin_list, void *data)
{
	t_list *new_link;

	new_link = ft_create_elem(data);
	new_link->next = *begin_list;
	*begin_list = new_link;
}
