/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 21:00:53 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/25 11:48:55 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	int i;
	t_struct *temp;

	i = 0;
	temp = (*begin_list)->next;
	while(temp->next)
	{
		i++;
		temp = temp->next;
	}
	end_list = temp;

	temp = *begin_list;
	(*begin_list)->next = end_list->next;
	end_list->next = temp->next;
