/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:37:03 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/12 00:50:43 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	unsigned int	n;

	n = 0;
	while (*(str + n))
	{
		n++;
	}
	return (n);
}

void	ft_printf_char(char c, unsigned int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_printf_str(char *s, unsigned int *count)
{
	if (!s)
	{
		write(1, "(null)", 6);
		*count += 6;
		return ;
	}
	write(1, s, ft_strlen(s));
	*count += ft_strlen(s);
}

void	ft_printf_ptr(unsigned long ptr, unsigned int *count)
{
	const char	*base;
	char		buffer[25];
	int			i;

	base = "0123456789abcdef";
	if (ptr == 0)
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
		buffer[i] = base[ptr % 16];
		ptr /= 16;
		i++;
	}
	while (i)
	{
		i--;
		ft_printf_char(buffer[i], count);
	}
}
