/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 13:59:48 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/14 14:03:38 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *cur;

	cur = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (cur);
}
