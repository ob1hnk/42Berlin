/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 01:04:54 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/14 19:52:27 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

void	ft_printf_char(char c, unsigned int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_printf_str(const char *str, unsigned int *count)
{
	if (!str)
	{
		write(1, "(null)", 6);
		*count += 6;
		return ;
	}
	write(1, str, ft_strlen(str));
	*count += ft_strlen(str);
}

void	ft_printf_ptr(unsigned long ptr, unsigned int *count)
{
	const char	*base;
	char		buffer[25];
	int			i;

	base = "0123456789abcdef";
	if (!ptr)
	{
		write(1, "(nil)", 5);
		*count += 5;
		return ;
	}
	ft_printf_char('0', count);
	ft_printf_char('x', count);
	i = 0;
	while (ptr)
	{
		buffer[i] = *(base + (ptr % 16));
		ptr /= 16;
		i++;
	}
	while (i--)
	{
		ft_printf_char(buffer[i], count);
	}
}
