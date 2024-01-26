/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:45:42 by mamerlin          #+#    #+#             */
/*   Updated: 2024/01/23 14:45:42 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr_un(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 10)
	{
		count += ft_putchar(n + 48);
		return (count);
	}
	else
		ft_putnbr_un(n / 10);
	ft_putnbr_un(n % 10);
	return (count);
}

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count += ft_putchar('-');
		count += ft_putchar('2');
		n = 147483648;
	}
	else if (n < 0)
	{
		count += ft_putchar('-');
		n *= -1;
	}
	if (n < 10)
	{
		count += ft_putchar(n + 48);
		return (count);
	}
	else
		ft_putnbr(n / 10);
	ft_putnbr(n % 10);
	return (count);
}

int	ft_numlen(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

int	ft_puthex(unsigned int n, const char format)
{
	if (format == 'p')
		write(1, '0x', 2);
	if (n >= 16)
	{
		ft_puthex((n / 16), format);
		ft_puthex((n % 16), format);
	}
	else
	{
		if (n <= 9)
			ft_putchar((n + 48));
		else
		{
			if (format == 'X')
				ft_putchar((n - 10 + 'A'));
			if (format == 'x')
				ft_putchar((n - 10 + 'a'));
		}
	}
	return (ft_numlen(n));
}

