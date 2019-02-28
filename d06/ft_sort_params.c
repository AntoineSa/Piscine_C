/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 19:27:25 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/15 13:17:17 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int diff;

	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	diff = *s1 - *s2;
	return (diff);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_print(int i, char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
	i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int		i;
	int		diff;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		diff = ft_strcmp(argv[i], argv[i + 1]);
		if (diff > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (argv[i] != '\0')
		i = ft_print(i, argv[i]);
	return (0);
}
