/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 17:42:11 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/19 18:59:18 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcpy(char *dest, char *src)
{
	while (*src != '\0' && *src != ' ' && *src != '	' && *src != '\n')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

int		ft_strlen(char *str)
{
	int i;

	i = 1;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '	' && str[i] != '\n')
		i++;
	return (i);
}

int		ft_count_words(char *str)
{
	int i;

	i = 1;
	while (*str != '\0')
	{
		if ((*(str - 1) == ' ' || *(str - 1) == '	' || *(str - 1) == '\n' ||
			(i == 1)) && (*str >= 33 && *str <= 126))
			i++;
		str++;
	}
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	char	**tab;

	i = 0;
	tab = (char**)malloc(sizeof(*tab) * ft_count_words(str));
	while (*str != '\0')
	{
		if (*str != '\0' && (*str == ' ' || *str == '	' || *str == '\n'))
			str++;
		else if (*str != '\0')
		{
			tab[i] = (char*)malloc(sizeof(**tab) * (ft_strlen(str) + 1));
			ft_strcpy(tab[i], str);
			i++;
			str = str + ft_strlen(str);
		}
	}
	tab[i] = 0;
	return (tab);
}
