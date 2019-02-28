/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 20:39:48 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/25 12:48:48 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;

	if (!(*begin_list)->next)
	{
		temp = (*begin_list)->next;
		free(*begin_list);
		*begin_list = temp;
		ft_list_clear(begin_list);
	}
	begin_list = NULL;
}

int main(void)
{
	return (0);
}
