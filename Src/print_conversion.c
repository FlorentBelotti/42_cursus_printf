/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_conversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:18:07 by fbelotti          #+#    #+#             */
/*   Updated: 2023/10/24 11:42:52 by fbelotti         ###   ########.fr       */
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
	int					i;
	int					count;
	char				*hex;
	char				adresse[16];
	unsigned long int	n;

	count = 0;
	if (!add)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	hex = "0123456789abcdef";
	i = 0;
	n = (size_t) add;
	count += ft_putstr("0x");
	while (n > 0)
	{
		adresse[i++] = hex[n % 16];
		n /= 16;
	}
	while (i)
		count += ft_putchar(adresse[--i]);
	return (count);
}

int	ft_put_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_put_unsigned(n / 10);
		count += ft_put_unsigned(n % 10);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}
