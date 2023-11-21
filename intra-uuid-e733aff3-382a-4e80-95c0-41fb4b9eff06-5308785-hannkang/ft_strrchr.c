/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fft_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:44:09 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/15 19:11:11 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;

	t = (char *)s + ft_strlen(s);
	while (t && c != *t)
	{
		t--;
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
// 	printf("%p\n", strrchr(s, 'a'));
// 	printf("%c", *(strrchr(s, 'a')));
// }