/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 19:16:57 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/21 13:52:16 by asablayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <unistd.h>

typedef struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;

void				ft_show_tab(struct s_stock_par *par);

void				ft_putchar(char c);

void				ft_putstr(char *str);

char				**ft_split_whitespaces(char	*str);

struct s_stock_par	*ft_param_to_tab(int ac, char **av);
#endif
