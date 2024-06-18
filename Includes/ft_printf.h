/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:50:59 by fbelotti          #+#    #+#             */
/*   Updated: 2023/10/21 18:24:27 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *form, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_print_digit_lower(long n, int base);
int	ft_print_digit_upper(long n, int base);
int	ft_putnbr(int n);
int	ft_putadd(void *add);
int	ft_put_unsigned(unsigned int n);

#endif
