/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 00:55:45 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/14 19:52:45 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_argcheck(char c, va_list args, unsigned int *count)
{
	if (c == '%')
		ft_printf_char('%', count);
	else if (c == 'c')
		ft_printf_char(va_arg(args, long), count);
	else if (c == 's')
		ft_printf_str(va_arg(args, char *), count);
	else if (c == 'd' || c == 'i')
		ft_printf_int(va_arg(args, int), count);
	else if (c == 'u')
		ft_printf_uint(va_arg(args, unsigned int), count);
	else if (c == 'X')
		ft_printf_hex(va_arg(args, unsigned int), count, 'X');
	else if (c == 'x')
		ft_printf_hex(va_arg(args, unsigned int), count, 'x');
	else if (c == 'p')
		ft_printf_ptr(va_arg(args, unsigned long), count);
}

int	ft_printf(const char *string, ...)
{
	va_list			args;
	int				i;
	unsigned int	count;

	if (!string)
		return (-1);
	va_start(args, string);
	i = 0;
	count = 0;
	while (string[i])
	{
		if (string[i] == '%')
		{
			ft_argcheck(string[++i], args, &count);
			i++;
		}
		else
		{
			ft_printf_char(string[i], &count);
			i++;
		}
	}
	va_end(args);
	return (count);
}
