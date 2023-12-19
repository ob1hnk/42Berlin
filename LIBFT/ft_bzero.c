/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:55:23 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/22 21:15:48 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = s;
	while (n--)
	{
		*p++ = '\0';
	}
}

// #include <stdio.h>
// int	main()
// {
// 	int intArray[] = {1, 2, 3, 4, 5};
//     size_t intArraySize = sizeof(intArray) / sizeof(int);

//     printf("Before bzero (intArray):\n");
//     for (size_t i = 0; i < intArraySize; i++) {
//         printf("%d ", intArray[i]);
//     }
//     printf("\n");

//     ft_bzero(intArray, sizeof(intArray));

//     printf("After ft_bzero (intArray):\n");
//     for (size_t i = 0; i < intArraySize; i++) {
//         printf("%d ", intArray[i]);
//     }
//     printf("\n\n");

//     // Test case 2: Testing with a character array
//     char charArray[] = "Hello, World!";
//     size_t charArraySize = sizeof(charArray);

//     printf("Before ft_bzero (charArray): %s\n", charArray);

//     ft_bzero(charArray, sizeof(charArray));

//     printf("After ft_bzero (charArray): %s\n", charArray);

//     return 0;
// }