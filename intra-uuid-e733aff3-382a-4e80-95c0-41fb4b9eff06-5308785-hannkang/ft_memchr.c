/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:06:13 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/17 12:19:30 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *p = s;
	unsigned char cc = c;
	unsigned char	i;

	i = 0;
	while (n--)
	{
		if (*(p + i) == cc)
		{			
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}


// #include <stdio.h>
// #include <string.h>

// int main() {
//     // Test case 1: Testing with a character array
//     const char str[] = "Hello, World!";
//     char targetChar = 'o';

//     // Find the first occurrence of 'o' in the string
//     const char *result = ft_memchr(str, targetChar, strlen(str));

//     if (result != NULL) {
//         printf("'%c' found at position: %ld\n", targetChar, result - str);
//     } else {
//         printf("'%c' not found in the string.\n", targetChar);
//     }

//     // Test case 2: Testing with an array of integers
//     int numbers[] = {1, 2, 3, 4, 5, 6, 7};
//     size_t numCount = sizeof(numbers) / sizeof(int);
//     int targetNumber = 4;

//     // Find the first occurrence of 4 in the array of integers
//     int *resultInt = ft_memchr(numbers, targetNumber, numCount * sizeof(int));

//     if (resultInt != NULL) {
//         printf("%d found at position: %ld\n", targetNumber, resultInt - numbers);
//     } else {
//         printf("%d not found in the array.\n", targetNumber);
//     }

//     return 0;
// }
