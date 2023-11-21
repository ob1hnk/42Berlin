/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:25:25 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/17 13:53:20 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sizeofdst;
	int	i;

	sizeofdst = ft_strlen(dst);
	i = 0;
	while (src[i] && size)
	{
		dst[sizeofdst + i] = src[i];
		i++;
		size--;
	}
	if (size) dst[sizeofdst + i] = '\0';	//if there's space in 'size' left for null

	return (sizeofdst + ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     // Test case 1: Testing with character arrays
//     char dest1[20] = "Hello, ";
//     const char src1[] = "World!";

//     // Concatenate src1 to dest1 using ft_strlcat
//     size_t result1 = ft_strlcat(dest1, src1, sizeof(dest1));

//     printf("Result 1: %s\n", dest1);
//     printf("Length of concatenated string: %zu\n\n", result1);

//     // Test case 2: Testing with strings and buffer size limitation
//     char dest2[10] = "Hello";
//     const char src2[] = ", World!";

//     // Concatenate src2 to dest2 using ft_strlcat with size limitation
//     size_t result2 = ft_strlcat(dest2, src2, sizeof(dest2));

//     printf("Result 2: %s\n", dest2);
//     printf("Length of concatenated string: %zu\n", result2);

//     return 0;
// }

