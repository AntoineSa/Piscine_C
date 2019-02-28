/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfalkau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 11:26:45 by lfalkau           #+#    #+#             */
/*   Updated: 2019/02/27 22:03:46 by lfalkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		count_words(char *str)
{
	int word_count;

	word_count = 0;
	while (*str != '\0')
	{
		if (*str == '\n')
			str++;
		else
		{
			while (*str && *str != '\n')
				str++;
			word_count++;
		}
	}
	return (word_count);
}

void	add_word(char **array, char *word, int word_number, int len)
{
	int i;

	array[word_number] = malloc((len + 1) * sizeof(char));
	i = -1;
	while (++i < len)
		array[word_number][i] = word[i];
	array[word_number][len] = '\0';
}

void	parse_word(char **str, int *word_len, char **word)
{
	while (**str && **str != '\n')
	{
		if (*word_len == 0)
			*word = *str;
		(*str)++;
		(*word_len)++;
	}
}

char	*ft_next_char(char *str)
{
	if (*(str + 1) == '\n')
		return (NULL);
	else
		str++;
	return (str);
}

char	**ft_split(char *str)
{
	char	*word;
	char	**array;
	int		word_number;
	int		word_len;

	array = malloc((count_words(str) + 1) * sizeof(char *));
	word_number = 0;
	word_len = 0;
	while (*str != '\0')
	{
		if (*str == '\n')
		{
			if (!(str = ft_next_char(str)))
				return (NULL);
		}
		else
		{
			parse_word(&str, &word_len, &word);
			add_word(array, word, word_number, word_len);
			word_number++;
			word_len = 0;
		}
	}
	array[word_number] = NULL;
	return (array);
}
