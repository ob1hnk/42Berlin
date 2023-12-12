/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:38:27 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/06 19:45:57 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*t;

	t = (char *)s;
	c %= 256;
	while (*t && *t != c)
	{
		t++;
	}
	if (*t == c)
		return (t);
	return (NULL);
}

// #include <stdio.h>
// int	main()
// {
// 	char		*str;
// 	char		str2[] = "bonjour";

// 	printf("%p\n", &(*str2));
// 	if (!(str = ft_strchr(str2, 's')))
// 		printf("it's null\n");
// }