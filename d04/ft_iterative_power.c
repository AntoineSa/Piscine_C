/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 11:47:10 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/12 21:14:11 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = nb;
	if (power == 0)
		nb = 1;
	else if (power == 1)
		return (nb);
	else if (power < 0)
		nb = 0;
	while (power >= 2)
	{
		nb = nb * res;
		power--;
	}
	return (nb);
}
