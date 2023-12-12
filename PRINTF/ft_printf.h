/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:45:38 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/12 00:31:37 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

void	ft_args_check(char s, va_list args, unsigned int *count);
int		ft_printf(const char *string, ...);
int		ft_strlen(const char *str);
void	ft_printf_char(char c, unsigned int *count);
void	ft_printf_str(char *s, unsigned int *count);
void	ft_printf_int(int n, unsigned int *count);
void	ft_printf_uint(unsigned int n, unsigned int *count);
void	ft_printf_hex(unsigned int n, unsigned int *count, char x_or_x);
void	ft_printf_ptr(unsigned long ptr, unsigned int *count);

#endif