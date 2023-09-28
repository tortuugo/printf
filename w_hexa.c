/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_hexa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:34:46 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/28 16:36:55 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	gohexa(size_t c, int *sol)
{
	char	*basehexa;

	basehexa = "0123456789abcdef";
	if (c > 0)
	{
		gohexa(c / 16, sol);
		putchar_printf(basehexa[c % 16], sol);
	}
}

void	w_ptr(size_t adr, int *sol)
{
	if (adr == 0)
	{
		write (1, "0x0", 3);
		*sol = *sol + 3;
		return ;
	}
	write (1, "0x", 2);
	*sol = *sol + 2;
	gohexa(adr, sol);
}

void	w_hexalow(unsigned long int c, int *sol)
{
	if (c == 0)
		putchar_printf('0', sol);
	gohexa(c, sol);
}

void	w_hexatop(unsigned long int c, int *sol)
{
	char	*hexatop;

	hexatop = "0123456789ABCDEF";
	if (c == 0)
		putchar_printf('0', sol);
	if (c > 0)
	{
		w_hexatop(c, sol);
		putchar_printf(hexatop[c % 16], sol);
	}
}
