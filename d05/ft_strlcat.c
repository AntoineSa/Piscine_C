/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 09:25:13 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/14 14:03:03 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ((dest[i] > 31 && dest[i] < 126) || i < size)
		i++;
	if (i == size - 1)
		return (size);
	while (j < size - i || *src != '\0')
	{
		dest[i] = *src;
		src++;
		dest++;
		j++;
	}
	dest[i] = *src;
	return (j);
}
