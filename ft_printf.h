/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:15:05 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/28 17:14:42 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *input, ...);

void	gohexa(size_t c, int *sol);
void	w_hexalow(unsigned long int c, int *sol);
void	w_hexatop(unsigned long int c, int *sol);
void	w_decimal(long long int n, int *sol);
void	w_ptr(size_t ptr, int *sol);
void	putchar_printf(char c, int *sol);

#endif
