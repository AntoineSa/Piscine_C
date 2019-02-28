/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 09:31:32 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/23 11:24:37 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

int		ft_check_base(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		if (str[i] == '+' || str[i] == '-' || str[i] == ' ')
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return ((i < 2) ? (0) : (1));
}

int		ft_check_input(char *nbr, char *base)
{
	int i;

	if (nbr[0] == '-' || nbr[0] == '+')
		nbr++;
	while (*nbr)
	{
		i = 0;
		while (base[i])
		{
			if (base[i] == *nbr)
				return ((ft_check_input(nbr + 1, base) == 1) ? 1 : 0);
			i++;
		}
		return (0);
	}
	return (1);
}

int		ft_convert_b10(char *nbr, char *base_from)
{
	int i;
	int n;
	int res;

	i = 0;
	n = 0;
	res = 0;
	if (nbr[i] == '-' || nbr[i] == '+')
		i++;
	while (i < ft_strlen(nbr))
	{
		n = 0;
		while (n < ft_strlen(base_from))
		{
			if (nbr[i] == base_from[n])
				res = res * ft_strlen(base_from) + n;
			n++;
		}
		i++;
	}
	if (*nbr == '-')
		res = -res;
	return (res);
}

char	*ft_convert_b10_bn(int nb, char *base)
{
	int		convert_len;
	int		n;
	char	*convert;

	convert_len = 1;
	n = nb;
	while (n / ft_strlen(base) != 0)
	{
		n = n / ft_strlen(base);
		convert_len++;
	}
	convert = (char*)malloc(sizeof(convert) * convert_len + 1);
	convert[convert_len] = '\0';
	while (convert_len >= 0)
	{
		convert_len--;
		convert[convert_len] = base[nb % ft_strlen(base)];
		nb = nb / ft_strlen(base);
	}
	return (convert);
}

char	*ft_neg_convert_b10_bn(int nb, char *base)
{
	int		convert_len;
	int		n;
	char	*convert;

	convert_len = 2;
	n = nb;
	while (n / ft_strlen(base) != 0)
	{
		n = n / ft_strlen(base);
		convert_len++;
	}
	convert = (char*)malloc(sizeof(convert) * convert_len + 1);
	convert[convert_len] = '\0';
	convert[0] = '-';
	while (convert_len >= 2)
	{
		convert_len--;
		convert[convert_len] = base[nb % ft_strlen(base)];
		nb = nb / ft_strlen(base);
	}
	return (convert);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		res;
	char	*convert;

	if (ft_check_base(base_from) == 0)
		return (0);
	else if (ft_check_base(base_to) == 0)
		return (0);
	else if (ft_check_input(nbr, base_from) == 0)
		return (0);
	res = ft_convert_b10(nbr, base_from);
	if (res >= 0)
		convert = ft_convert_b10_bn(res, base_to);
	else if (res < 0)
		convert = ft_neg_convert_b10_bn(-res, base_to);
	return (convert);
}
