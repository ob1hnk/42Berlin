/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:04:55 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/22 21:15:20 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

// #include <stdio.h>
// int main() {
//     // Test case 1: Testing with an array of integers
//     int srcArr[] = {1, 2, 3, 4, 5};
//     int destArr[5];
//
//     // Print the src arr before using memcpy
//     printf("src Arr: ");
//     for (size_t i = 0; i < sizeof(srcArr) / sizeof(int); i++) {
//         printf("%d ", srcArr[i]);
//     }
//     printf("\n");
//
//     // Use mymemcpy to copy the contents of srcArr to destArr
//     ft_memcpy(destArr, srcArr, sizeof(srcArr));
//
//     // Print the dest arr after using ft_memcpy
//     printf("Dest Arr: ");
//     for (size_t i = 0; i < sizeof(destArr) / sizeof(int); i++) {
//         printf("%d ", destArr[i]);
//     }
//     printf("\n\n");
//
//     // Test case 2: Testing with a character array
//     const char *srcStr = "Hello, World!";
//     char destStr[20];
//
//     // Print the src Str before using memcpy
//     printf("src Str: %s\n", srcStr);
//
//     // Use ft_memcpy to copy the contents of srcStr to destStr
//     ft_memcpy(destStr, srcStr, ft_strlen(srcStr) + 1);
//
//     // Print the dest Str after using mymemcpy
//     printf("Dest Str: %s\n", destStr);
//
//     return 0;
// }