/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 00:55:42 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/12 02:03:27 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

void			ft_argcheck(char c, va_list args, unsigned int *count);
int				ft_printf(const char *string, ...);
unsigned int	ft_strlen(const char *str);
void			ft_printf_char(char c, unsigned int *count);
void			ft_printf_str(const char *str, unsigned int *count);
void			ft_printf_ptr(unsigned long ptr, unsigned int *count);
void			ft_printf_int(int n, unsigned int *count);
void			ft_printf_uint(unsigned int n, unsigned int *count);
void			ft_printf_hex(unsigned int n, unsigned int *count, char x_or_x);

#endif