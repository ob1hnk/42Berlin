/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:06:13 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/22 21:16:07 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		cc;
	unsigned char		i;

	p = s;
	cc = c;
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
//     char tgChar = 'o';

//     // Find the first occurrence of 'o' in the string
//     const char *result = ft_memchr(str, tgChar, strlen(str));

//     if (result != NULL) {
//         printf("'%c' found at position: %ld\n", tgChar, result - str);
//     } else {
//         printf("'%c' not found in the string.\n", tgChar);
//     }

//     // Test case 2: Testing with an array of integers
//     int n[] = {1, 2, 3, 4, 5, 6, 7};
//     size_t numCount = sizeof(n) / sizeof(int);
//     int tgNumber = 4;

//     // Find the first occurrence of 4 in the array of integers
//     int *resultInt = ft_memchr(n, tgNumber, numCount * sizeof(int));

//     if (resultInt != NULL) {
//         printf("%d found at position: %ld\n", tgNumber, resultInt - n);
//     } else {
//         printf("%d not found in the array.\n", tgNumber);
//     }

//     return 0;
// }
