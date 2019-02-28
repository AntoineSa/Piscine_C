/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asablayr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 10:19:28 by asablayr          #+#    #+#             */
/*   Updated: 2019/02/17 21:54:27 by dberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_show_tab(char **tab);
int		ft_find_empty(int *r, int *c, char **tab);
int		ft_check_conflict(int l, int c, char n, char **tab);
int		ft_solve(char **tab);
int		ft_check_input(int nb, char **tab);

#endif
