/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:47:09 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/22 21:15:55 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d < s)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else if (d > s)
	{
		while (n--)
		{
			*(d + n) = *(s + n);
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <stdio.h>
// #include <string.h>

// // Function prototype for your memmove implementation
// void *ft_memmove(void *dest, const void *src, size_t n);

// int main() {
//     // Test case 1: Testing with a character array
//     char str[] = "Hello, World!";
//     printf("Before memmove: %s\n", str);

//     // Move "World!" to the beginning of the string
//     ft_memmove(str, str + 7, 6);

//     printf("After memmove: %s\n\n", str);

//     // Test case 2: Testing with an array of integers
//     int numbers[] = {1, 2, 3, 4, 5, 6, 7};
//     size_t numCount = sizeof(numbers) / sizeof(int);

//     printf("Before memmove: ");
//     for (size_t i = 0; i < numCount; i++) {
//         printf("%d ", numbers[i]);
//     }
//     printf("\n");

//     // Move the last three integers to the beginning of the array
//     ft_memmove(numbers, numbers + 4, 3 * sizeof(int));

//     printf("After memmove: ");
//     for (size_t i = 0; i < numCount; i++) {
//         printf("%d ", numbers[i]);
//     }
//     printf("\n");

//     return 0;
// }
