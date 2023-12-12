/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 23:42:33 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/12 02:10:04 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_int(int n, unsigned int *count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count += 11;
		return ;
	}
	if (n < 0)
	{
		ft_printf_char('-', count);
		ft_printf_int(n * -1, count);
	}
	else
	{
		if (n > 9)
			ft_printf_int(n / 10, count);
		ft_printf_char(n % 10 + '0', count);
	}
}

void	ft_printf_uint(unsigned int n, unsigned int *count)
{
	if (n > 9)
		ft_printf_uint(n / 10, count);
	ft_printf_char(n % 10 + '0', count);
}

void	ft_printf_hex(unsigned int n, unsigned int *count, char x_or_x)
{
	const char	*base;
	char		buffer[15];
	int			i;

	if (x_or_x == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n == 0)
	{
		ft_printf_char('0', count);
		return ;
	}
	i = 0;
	while (n)
	{
		buffer[i] = base[n % 16];
		n /= 16;
		i++;
	}
	while (i)
	{
		i--;
		ft_printf_char(buffer[i], count);
	}
}
