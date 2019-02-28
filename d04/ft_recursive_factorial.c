/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 19:08:41 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/12 15:45:35 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb >= 13)
		nb = 0;
	else if (nb == 0 || nb == 1)
		nb = 1;
	else if (nb < 0)
		nb = 0;
	else if (nb > 1)
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
