/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 09:04:24 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/12 12:19:44 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		nb = 0;
	else if (power == 0)
		nb = 1;
	else if (power > 1)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
