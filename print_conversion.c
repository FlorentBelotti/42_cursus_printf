/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_conversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:18:07 by fbelotti          #+#    #+#             */
/*   Updated: 2023/10/20 16:34:59 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit_lower(long n, int base)
{
	int		count;
	char	*hex;

	hex = "0123456789abcdef";
	count = 0;
	if (n < 0)
	{
		ft_putchar('-');
		return (count + ft_print_digit_lower(-n, base));
	}
	else if (n < base)
		return (count + ft_putchar(hex[n]));
	else
	{
		count = ft_print_digit_lower(n / base, base);
		return (count + ft_print_digit_lower(n % base, base));
	}
}

int	ft_print_digit_upper(long n, int base)
{
	int		count;
	char	*hex;

	hex = "0123456789ABCDEF";
	count = 0;
	if (n < 0)
	{
		ft_putchar('-');
		return (count + ft_print_digit_upper(-n, base));
	}
	else if (n < base)
		return (ft_putchar(hex[n]));
	else
	{
		count = ft_print_digit_upper(n / base, base);
		return (count + ft_print_digit_upper(n % base, base));
	}
}

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		count += write (1, "-2147483648", 11);
	else if (n < 0)
	{
		count += ft_putchar('-');
		count += ft_putnbr(-n);
	}
	else if (n > 9)
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}

int	ft_putadd(void *add)
{
	char			*hex;
	int				count;
	unsigned long	n;

	hex = "0123456789abcdef";
	count = 0;
	n = (unsigned long) add;
	if (n >= 16)
		ft_putadd((void *)(n / 16));
	else
	{
		count += ft_putchar('0');
		count += ft_putchar('x');
	}
	count += ft_putchar(hex[n % 16]);
	return (count);
}

int	ft_putunsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		ft_putunsigned(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}
