/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:19:50 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/17 12:35:54 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	unsigned char	i;

	ss1 = s1;
	ss2 = s2;
	i = 0;
	while (n--)
	{
		if (*(ss1 + i) != *(ss2 + i)) return (*(ss1 + i) - *(ss2 + i));
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     // Test case 1: Testing with character arrays
//     const char str1[] = "Hello, World!";
//     const char str2[] = "Hello, Universe!";
//     size_t commonPrefix = 8; // Length of "Hello,"

//     // Compare the common prefix of str1 and str2
//     int result1 = ft_memcmp(str1, str2, commonPrefix);

//     if (result1 == 0) {
//         printf("The common prefix is identical.\n");
//     } else {
//         printf("The common prefix differs.\n");
//     }

//     // Test case 2: Testing with arrays of integers
//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {1, 2, 3, 6, 7};
//     size_t commonElements = 4; // Length of {1, 2, 3}

//     // Compare the common elements of arr1 and arr2
//     int result2 = ft_memcmp(arr1, arr2, commonElements * sizeof(int));

//     if (result2 == 0) {
//         printf("The common elements are identical.\n");
//     } else {
//         printf("The common elements differ.\n");
//     }

//     return 0;
// }
