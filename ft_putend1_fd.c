/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putend1_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:39:16 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/22 21:02:50 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putend1_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\0", 1);
	write(fd, "\n", 1);
}
