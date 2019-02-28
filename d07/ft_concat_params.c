/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 12:14:27 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/20 13:44:55 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 1;
	k = 0;
	str = (char*)malloc(sizeof(argv) * argc);
	while (j < argc)
	{
		k = 0;
		while (argv[j][k] != '\0')
		{
			str[i] = argv[j][k];
			i++;
			k++;
		}
		str[i] = '\n';
		i++;
		j++;
	}
	str[i - 1] = '\0';
	return (str);
}
