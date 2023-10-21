/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:50:46 by fbelotti          #+#    #+#             */
/*   Updated: 2023/10/21 18:25:54 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_conversion(char c)
{
	const char	*specifiers;
	int			i;

	specifiers = "cspdiuxX%";
	i = 0;
	while (specifiers[i])
	{
		if (c == specifiers[i])
			return (1);
		i++;
	}
	return (0);
}

int	print_conversion(char specifier, va_list arg)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (specifier == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (specifier == 'd')
		return (ft_putnbr(va_arg(arg, int)));
	if (specifier == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	if (specifier == 'x')
		return (ft_print_digit_lower((long)va_arg(arg, unsigned int), 16));
	if (specifier == 'X')
		return (ft_print_digit_upper((long)va_arg(arg, unsigned int), 16));
	if (specifier == 'p')
		return (ft_putadd(va_arg(arg, void *)));
	if (specifier == 'u')
		return (ft_put_unsigned(va_arg(arg, unsigned int)));
	if (specifier == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *form, ...)
{
	va_list	arg;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(arg, form);
	while (form[i])
	{
		if (form[i] == '%' && form[i + 1] && is_conversion(form[i + 1]))
		{
			count += print_conversion(form[i + 1], arg);
			i++;
		}
		else
			count += write(1, &form[i], 1);
		i++;
	}
	va_end(arg);
	return (count);
}
