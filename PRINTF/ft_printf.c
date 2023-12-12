/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:54:09 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/12 02:39:32 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_args_check(char s, va_list args, unsigned int *count)
{
	if (s == 'c')
		ft_printf_char(va_arg(args, int), count);
	else if (s == '%')
		ft_printf_char('%', count);
	else if (s == 's')
		ft_printf_str(va_arg(args, char *), count);
	else if (s == 'd' || s == 'i')
		ft_printf_int(va_arg(args, int), count);
	else if (s == 'u')
		ft_printf_uint(va_arg(args, unsigned int), count);
	else if (s == 'x')
		ft_printf_hex(va_arg(args, unsigned int), count, 'x');
	else if (s == 'X')
		ft_printf_hex(va_arg(args, unsigned int), count, 'X');
	else if (s == 'p')
		ft_printf_ptr(va_arg(args, unsigned long), count);
}

int	ft_printf(const char *string, ...)
{
	va_list			args;
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	if (!string)
		return (-1);
	va_start(args, string);
	while (string[i])
	{
		if (string[i] == '%')
		{
			ft_args_check(string[++i], args, &count);
			i++;
		}
		else
			ft_printf_char(string[i++], &count);
	}
	return (count);
}
