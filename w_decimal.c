/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_decimal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:26:34 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/28 18:12:04 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	recursion(long long int n, int *sol)
{
	if (n > 0)
	{
		recursion(n / 10, sol);
		putchar_printf((n % 10) + '0', sol);
	}
}

void	w_decimal(long long int n, int *sol)
{
	if (n < 0)
	{
		putchar_printf('-', sol);
		n *= -1;
	}
	if (n == 0)
		putchar_printf('0', sol);
	recursion(n, sol);
}
