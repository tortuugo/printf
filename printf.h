/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:15:05 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/27 20:31:00 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include "./../libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

typedef struct s_sol
{
	int		sol;
}			t_sol;

int		ft_printf(char const *input, ...);

void	gohexa(int c, int *sol);
void	w_hexalow(unsigned long int c, int *sol);
void	w_hexatop(unsigned long int c, int *sol);
void	w_decimal(long int n, int *sol);
void	w_ptr(size_t ptr, int *sol);

#endif
