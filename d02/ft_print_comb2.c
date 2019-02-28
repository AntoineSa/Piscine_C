/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 08:46:08 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/08 12:08:12 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(char nb1[], char nb2[])
{
	ft_putchar(nb1[0]);
	ft_putchar(nb1[1]);
	ft_putchar(' ');
	ft_putchar(nb2[0]);
	ft_putchar(nb2[1]);
	if (nb1[0] != '9' || nb1[1] != '8' || nb2[0] != '9' || nb2[1] != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	nb2[1]++;
}

void	ft_print_comb2(void)
{
	char nb1[2];
	char nb2[2];

	nb1[0] = '0';
	while (nb1[0] <= '9')
	{
		nb1[1] = '0';
		nb2[0] = nb1[0];
		nb2[1] = nb1[1] + 1;
		while (nb1[1] <= '9')
		{
			while (nb2[0] <= '9')
			{
				while (nb2[1] <= '9')
					ft_display(nb1, nb2);
				nb2[0]++;
				nb2[1] = '0';
			}
			nb1[1]++;
			nb2[1] = nb1[1] + 1;
			nb2[0] = nb1[0];
		}
		nb1[0]++;
	}
}
