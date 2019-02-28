/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 10:53:34 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/23 09:40:04 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int diff;
	int i;

	diff = max - min;
	i = 0;
	if (diff <= 0)
	{
		range = 0;
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * diff + 1);
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (diff);
}
