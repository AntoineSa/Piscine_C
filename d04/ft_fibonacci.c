/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 09:34:58 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/10 10:23:08 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		index = -1;
	else if (index == 0)
		index = 0;
	else if (index == 1 || index == 2)
		index = 1;
	else if (index > 2)
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (index);
}
