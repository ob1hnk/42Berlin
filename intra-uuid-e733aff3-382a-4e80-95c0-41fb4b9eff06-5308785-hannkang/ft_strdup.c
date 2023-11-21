/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:31:25 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/17 14:51:32 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	int	s_len;
	char	*p;
	
	if (!s) return NULL;
	s_len = ft_strlen(s) + 1;
	p = (char *)malloc(s_len * sizeof(char));
	if (p) ft_strlcpy(p, s, s_len);
	return (p);
}

// #include <stdlib.h>
// #include <string.h>

// int main() {
//     // Test case 1: Duplicating a constant string
//     const char *sourceString = "Hello, World!";
//     char *duplicateString = ft_strdup(sourceString);

//     if (duplicateString == NULL) {
//         fprintf(stderr, "Memory allocation failed.\n");
//         return EXIT_FAILURE;
//     }

//     printf("Original string: %s\n", sourceString);
//     printf("Duplicated string: %s\n\n", duplicateString);

//     // Test case 2: Duplicating a dynamically allocated string
//     char *dynamicString = (char *)malloc(20);
//     if (dynamicString == NULL) {
//         fprintf(stderr, "Memory allocation failed.\n");
//         free(duplicateString); // Free memory from previous test case
//         return EXIT_FAILURE;
//     }

//     strcpy(dynamicString, "Dynamic String");
//     char *duplicateDynamicString = ft_strdup(dynamicString);

//     if (duplicateDynamicString == NULL) {
//         fprintf(stderr, "Memory allocation failed.\n");
//         free(duplicateString);
//         free(dynamicString);
//         return EXIT_FAILURE;
//     }

//     printf("Original dynamic string: %s\n", dynamicString);
//     printf("Duplicated dynamic string: %s\n", duplicateDynamicString);

//     // Free allocated memory
//     free(duplicateString);
//     free(dynamicString);
//     free(duplicateDynamicString);

//     return 0;
// }
