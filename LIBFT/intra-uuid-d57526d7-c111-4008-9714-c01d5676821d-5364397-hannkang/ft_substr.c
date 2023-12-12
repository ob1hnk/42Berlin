/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:43:28 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/07 23:09:24 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s) >= start && ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (i < ft_strlen(s) && j < len)
	{
		p[j++] = s[i++];
	}
	p[j] = '\0';
	return (p);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     // Test string
// //     const char *originalString = "Hello, World!";

//     // Set start index and length for the substring
// //     unsigned int start = 7;
// //     size_t len = 5;

//     // Call the ft_substr function
//     char *substring = ft_substr("hola", 4294967295, 0);

//     // Check if the allocation was successful
//     if (substring == NULL) {
//         fprintf(stderr, "Substring allocation failed.\n");
//         return 1; // Return an error code
//     }

//     // Print the original string and the substring
// //     printf("Original String: %s\n", originalString);
// //     printf("Substr from index %u, length %zu: %s\n",
// 	// start, len, substring);

//     // Free the allocated memory for the substring
//     free(substring);

//     return 0; // Return 0 for successful execution
// }