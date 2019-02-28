/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 11:16:41 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/13 10:16:46 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	else if (nb == 2)
		return (1);
	while (nb % i != 0 && i <= nb / 2)
		i++;
	if (nb % i == 0)
		return (0);
	else
		return (1);
	return (nb);
}
