/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfalkau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 09:20:50 by lfalkau           #+#    #+#             */
/*   Updated: 2019/02/27 22:54:04 by lfalkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*check_charset(char *charset, t_size *map_size)
{
	char *final_set;

	if (!charset || ft_strlen(charset) < 4)
		return (NULL);
	final_set = ft_strdup(&charset[ft_strlen(charset) - 3]);
	charset[ft_strlen(charset) - 3] = '\0';
	if (!(map_size->h = ft_atoi(charset)))
		return (NULL);
	if (map_size->h < 1)
		return (NULL);
	while (*charset >= '0' && *charset <= '9')
		charset++;
	if (*charset != '\0')
		return (NULL);
	if (final_set[0] == final_set[1] || final_set[1] == final_set[2]
			|| final_set[0] == final_set[2])
		return (NULL);
	return (final_set);
}

char	**check_map(char **map, char *charset, t_size *map_size)
{
	int i;
	int j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != charset[0] && map[i][j] != charset[1])
				return (NULL);
			j++;
		}
		if (i == 0)
			map_size->w = j;
		if (j != map_size->w)
			return (NULL);
		i++;
	}
	if (i != map_size->h)
		return (NULL);
	return (map);
}
