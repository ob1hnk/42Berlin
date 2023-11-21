/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:04:55 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/17 13:15:23 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d = dest;
	const unsigned char	*s = src;
	
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

// #include <stdio.h>
// int main() {
//     // Test case 1: Testing with an array of integers
//     int sourceArray[] = {1, 2, 3, 4, 5};
//     int destinationArray[5];

//     // Print the source array before using memcpy
//     printf("Source Array: ");
//     for (size_t i = 0; i < sizeof(sourceArray) / sizeof(int); i++) {
//         printf("%d ", sourceArray[i]);
//     }
//     printf("\n");

//     // Use mymemcpy to copy the contents of sourceArray to destinationArray
//     ft_memcpy(destinationArray, sourceArray, sizeof(sourceArray));

//     // Print the destination array after using ft_memcpy
//     printf("Destination Array: ");
//     for (size_t i = 0; i < sizeof(destinationArray) / sizeof(int); i++) {
//         printf("%d ", destinationArray[i]);
//     }
//     printf("\n\n");

//     // Test case 2: Testing with a character array
//     const char *sourceString = "Hello, World!";
//     char destinationString[20];

//     // Print the source string before using memcpy
//     printf("Source String: %s\n", sourceString);

//     // Use ft_memcpy to copy the contents of sourceString to destinationString
//     ft_memcpy(destinationString, sourceString, ft_strlen(sourceString) + 1);

//     // Print the destination string after using mymemcpy
//     printf("Destination String: %s\n", destinationString);

//     return 0;
// }