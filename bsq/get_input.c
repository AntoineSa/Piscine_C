/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 12:59:43 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/27 22:48:48 by lfalkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**ft_get_input(char *path_name, char *input)
{
	int				ret;
	unsigned int	i;
	int				fd;
	char			buff[BUFF_SIZE + 1];
	char			*tmp;

	ret = 1;
	i = 0;
	fd = open(path_name, O_RDONLY);
	if (fd == -1)
		return (NULL);
	while ((ret = read(fd, buff, BUFF_SIZE)) && ret >= 0)
	{
		tmp = input;
		if (!(input = (char*)malloc(sizeof(char) * (i + ret + 1))))
			return (NULL);
		ft_strncpy(input, tmp, i);
		ft_strncpy(&input[i], buff, ret);
		i += ret;
		input[i] = '\0';
		free(tmp);
	}
	return ((input == NULL) ? NULL : (ft_split(input)));
}

char	**ft_get_std_input(char *input)
{
	int				ret;
	unsigned int	i;
	char			buff[BUFF_SIZE + 1];
	char			*tmp;

	ret = 1;
	i = 0;
	while ((ret = read(0, buff, BUFF_SIZE)))
	{
		tmp = input;
		if (!(input = (char*)malloc(sizeof(char) * (i + ret + 1))))
			return (NULL);
		ft_strncpy(input, tmp, i);
		ft_strncpy(&input[i], buff, ret);
		i += ret;
		input[i] = '\0';
		free(tmp);
	}
	return ((input == NULL) ? NULL : (ft_split(input)));
}

void	init_buffer(char *buffer)
{
	int			i;

	i = 0;
	while (i <= BUFF_SIZE)
	{
		buffer[i] = '\0';
		i++;
	}
}
