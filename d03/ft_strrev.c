/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 15:10:55 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/10 21:59:00 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	mem;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	while (i <= len)
	{
		mem = str[len];
		str[len] = str[i];
		str[i] = mem;
		len--;
		i++;
	}
	return (str);
}
