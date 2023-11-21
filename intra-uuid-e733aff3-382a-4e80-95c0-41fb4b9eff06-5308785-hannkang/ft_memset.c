/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:34:45 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/17 10:54:18 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *p = s;
	while (n--)
	{
		*p++ = (unsigned char) c;
	}
	return (s);
}

// #include <stdio.h>
// int main() {
//     // Test case 1: Testing with an array of integers
//     int intArray[] = {1, 2, 3, 4, 5};
//     size_t intArraySize = sizeof(intArray) / sizeof(int);

//     printf("Before memset (intArray):\n");
//     for (size_t i = 0; i < intArraySize; i++) {
//         printf("%d ", intArray[i]);
//     }
//     printf("\n");

//     ft_memset(intArray, 0, sizeof(intArray));

//     printf("After memset (intArray):\n");
//     for (size_t i = 0; i < intArraySize; i++) {
//         printf("%d ", intArray[i]);
//     }
//     printf("\n\n");

//     // Test case 2: Testing with a character array
//     char charArray[] = "Hello, World!";
//     size_t charArraySize = sizeof(charArray);

//     printf("Before memset (charArray): %s\n", charArray);

//     ft_memset(charArray, '*', 10);  // Fill the first 10 characters with '*'

//     printf("After memset (charArray): %s\n", charArray);

//     return 0;
// }