/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:38:27 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/29 16:50:10 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*t;

	t = (char *)s;
	while (*t && c != *t)
	{
		t++;
	}
	if (c == *t)
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