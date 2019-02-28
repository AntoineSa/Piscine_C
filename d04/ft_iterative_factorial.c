/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 18:55:11 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/12 15:56:05 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	res = nb;
	if (nb == 1 || nb == 0)
		res = 1;
	else if (nb >= 13)
		res = 0;
	else if (nb < 0)
		res = 0;
	while (nb > 1)
	{
		res = res * (nb - 1);
		nb--;
	}
	return (res);
}
