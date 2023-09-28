/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:10:00 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/28 18:34:28 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	putchar_printf(char c, int *sol)
{
	write (1, &c, 1);
	*sol += 1;
}

static void	printf_s(char *s, int *sol)
{
	if (!s)
	{
		write (1, "(null)", 6);
		*sol += 6;
		return ;
	}
	while (*s)
	{
		putchar_printf(*s, sol);
		s++;
	}
}

static void	check_module(char c, va_list args, int *sol)
{
	if (c == 'c')
		putchar_printf(va_arg(args, int), sol);
	else if (c == 's')
		printf_s(va_arg(args, char *), sol);
	else if (c == 'p')
		w_ptr(va_arg(args, size_t), sol);
	else if (c == 'd')
		w_decimal(va_arg(args, int), sol);
	else if (c == 'i')
		w_decimal(va_arg(args, int), sol);
	else if (c == 'u')
		w_decimal(va_arg(args, unsigned int), sol);
	else if (c == 'x')
		w_hexalow(va_arg(args, unsigned int), sol);
	else if (c == 'X')
		w_hexatop(va_arg(args, unsigned int), sol);
	else if (c == '%')
		putchar_printf('%', sol);
}

int	ft_printf(char const *input, ...)
{
	va_list	args;
	int		sol;

	sol = 0;
	va_start (args, input);
	while (*input)
	{
		if (*input == '%')
			check_module(*(++input), args, &sol);
		else
			putchar_printf(*input, &sol);
		input++;
	}
	va_end(args);
	return (sol);
}
/*
int main(void)
{
	printf("%d\n", printf("%u\n", 9223372036854775807));
    printf("%d", ft_printf("%u\n", 9223372036854775807));
    return (0);
}*/
