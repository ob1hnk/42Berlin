/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:52:23 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/16 16:55:10 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!(*little)) return ((char *)big);
	while (big[i] && len)
	{
		while (big[i] == little[j])
		{
			j++;
		}
		if (j == ft_strlen(little)) break;
		i++;
		len--;
	}
	if (j == ft_strlen(little)) return ((char *)(&big[i - j + 1]));
	return NULL;
}

// #include <stdio.h>
// int	main()
// {
// 	char	big[11] = "Foo Bar Baz";
// 	char	little[11] = "Bar";
// 	printf("big[0]: %p\n", big);
// 	printf("strnstr: %p\n", ft_strnstr(big, little, 4));
	
// }