/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfalkau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 13:37:38 by lfalkau           #+#    #+#             */
/*   Updated: 2019/02/27 23:24:50 by lfalkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFF_SIZE (32768)

typedef struct	s_pos
{
	int			x;
	int			y;
}				t_pos;

typedef struct	s_square
{
	int			x;
	int			y;
	int			size;
}				t_square;

typedef struct	s_size
{
	int			h;
	int			w;
}				t_size;

typedef struct	s_comp
{
	int left;
	int top;
	int diag;
}				t_comp;

char			*ft_strdup(char *str);
int				try_to_fill_first_line(char **map, char *charset);
void			init_t_size(t_size *size);
int				resolve_std_bsq(char *s, char **mp, char *chrst, t_size *sz);
void			ft_map_error(void);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
void			init_buffer(char *buff);
int				ft_strlen(char *str);
char			*ft_strcpy(char *dest, char *src);
int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
void			print_map(char **map);
void			ultimate_bsq(char **map, char *charset, t_size map_size);
char			*ft_realloc(char *src, int len);
char			*ft_get_charset(int fd, char *charset, char *buff);
char			**ft_split(char *str);
char			*ft_next_char(char *str);
char			**ft_get_input(char *path_name, char *input);
char			**ft_get_std_input(char *input);
int				*ft_get_number(int fd, char *buff);
int				square_size(char **map, t_pos pos, char obst);
void			fill_square(char **map, char *charset, t_square square);
int				square_is_empty(char **map, t_pos pos, int size, char obst);
t_square		search_square(char **map, char *charset, t_size map_size);
void			set_square(t_square *square, int y, int x, int size);
int				min_value(int left, int top, int diag);
int				**copy_map(char **map, t_size size, char *charset);
char			**check_map(char **left_input, char *charset, t_size *map_size);
char			*check_charset(char *first_line, t_size *map_size);

#endif
