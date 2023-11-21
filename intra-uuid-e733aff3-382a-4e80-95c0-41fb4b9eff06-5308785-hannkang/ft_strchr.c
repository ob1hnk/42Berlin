/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:38:27 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/15 19:11:19 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*t;

	t = (char *)s;
	while (t && c != *t)
	{
		t++;
	}
	if (c == *t)
		return (t);
	return NULL;
}

// #include <stdio.h>
// int	main()
// {
// 	char *s = "jammabwez";
// 	printf("%p\n", &(*s));
// 	printf("%p\n", strchr(s, 'a'));
// 	printf("%c", *(strchr(s, 'a')));
// }