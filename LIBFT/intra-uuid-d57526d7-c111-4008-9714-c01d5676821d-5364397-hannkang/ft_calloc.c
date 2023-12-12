/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:00:34 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/06 20:01:15 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*r;

	r = malloc(nmemb * size);
	if (!r)
		return (NULL);
	ft_bzero(r, nmemb * size);
	return (r);
}

// #include <stdio.h>

// int main() {
//     // Test case 1: Allocating an array of integers
//     size_t num_elements = 5;
//     int *arr_int = (int *)ft_calloc(num_elements, sizeof(int));

//     if (arr_int == NULL) {
//         fprintf(stderr, "Memory allocation failed.\n");
//         return EXIT_FAILURE;
//     }

//     printf("Allocated array of %zu integers with calloc:\n", num_elements);
//     for (size_t i = 0; i < num_elements; i++) {
//         printf("%d ", arr_int[i]);
//     }
//     printf("\n");

//     // Test case 2: Allocating an array of doubles
//     size_t num_doubles = 3;
//     double *arr_double = (double *)ft_calloc(num_doubles, sizeof(double));

//     if (arr_double == NULL) {
//         fprintf(stderr, "Memory allocation failed.\n");
//         free(arr_int);  // Free previously allocated memory
//         return EXIT_FAILURE;
//     }

//     printf("\nAllocated array of %zu doubles with calloc:\n", num_doubles);
//     for (size_t i = 0; i < num_doubles; i++) {
//         printf("%lf ", arr_double[i]);
//     }
//     printf("\n");

//     // Free allocated memory
//     free(arr_int);
//     free(arr_double);

//     return 0;
// }
