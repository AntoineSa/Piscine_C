/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 11:29:23 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/09 11:50:55 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size);

void	ft_sort_integer_table(int *tab, int size)
{
	int *cur1;
	int *cur2;

	cur1 = tab;
	cur2 = tab + 1;
	while (cur2 <= tab  +size)
	{
		if (cur1 > cur2)
		{
			int c;

			c = *cur2;
			*cur2 = *cur1;
			*cur1 = c;
		}
		cur1++;
		cur2++;
	}
}
