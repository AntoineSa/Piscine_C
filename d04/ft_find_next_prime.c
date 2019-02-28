/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 11:46:07 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/13 11:48:49 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int ok;
	int i;

	ok = 0;
	while (ok == 0)
	{
		if (nb == 2 || nb == 3 || nb == 5 || nb == 7 || nb == 11)
			ok = 1;
		else if (nb <= 0 || nb == 1)
			return (2);
		else if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0
				|| nb % 7 == 0 || nb % 11 == 0)
			nb++;
		else
		{
			i = nb / 4;
			while (nb % i != 0 && i > 2)
				i--;
			if (nb % i == 0)
				nb++;
			else
				ok = 1;
		}
	}
	return (nb);
}
