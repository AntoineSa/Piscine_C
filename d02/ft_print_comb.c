/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 16:28:59 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/08 12:10:43 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(int a, int b, int c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7' || b != '8' || c != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int nb1;
	int	nb2;
	int nb3;

	nb1 = '0';
	nb2 = nb1 + 1;
	nb3 = nb1 + 2;
	while (nb1 <= '7')
	{
		while (nb2 <= '8')
		{
			while (nb3 <= '9')
			{
				ft_display(nb1, nb2, nb3);
				nb3 += 1;
			}
			nb2 += 1;
			nb3 = nb2 + 1;
		}
		nb1 += 1;
		nb2 = nb1;
	}
}
