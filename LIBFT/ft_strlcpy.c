/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:05:28 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/06 19:50:30 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     // Test case 1: Testing with character arrays
//     char dest1[20];
//     const char src1[] = "Hello, World!";

//     // Copy src1 to dest1 using ft_strlcpy
//     size_t result1 = ft_strlcpy(dest1, src1, sizeof(dest1));

//     printf("Result 1: %s\n", dest1);
//     printf("Length of copied string: %zu\n\n", result1);

//     // Test case 2: Testing with strings and buffer size limitation
//     char dest2[10];
//     const char src2[] = "Hello, World!";

//     // Copy src2 to dest2 using ft_strlcpy with size limitation
//     size_t result2 = ft_strlcpy(dest2, src2, sizeof(dest2));

//     printf("Result 2: %s\n", dest2);
//     printf("Length of copied string: %zu\n", result2);

//     return 0;
// }
