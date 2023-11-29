/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:34:40 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/22 21:02:36 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (*(s + i))
	{
		str[i] = f(i, s[i]);
		i++; 
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>

// // Function prototype
// char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

// // Function to free the memory allocated for the result of ft_strmapi
// void free_strmapi_result(char *result) {
//     free(result);
// }

// // Example mapping function
// char map_function(unsigned int index, char character) {
//     // Convert lowercase letters to uppercase
//     if (character >= 'a' && character <= 'z') {
//         return character - ('a' - 'A');
//     }
//     return character;
// }

// // Example main function
// int main() {
//     // Test string
//     const char *inputString = "Hello, World!";

//     // Call ft_strmapi with the mapping function
//     char *resultString = ft_strmapi(inputString, &map_function);

//     // Check if the allocation was successful
//     if (resultString == NULL) {
//         fprintf(stderr, "String mapping failed.\n");
//         return 1; // Return an error code
//     }

//     // Print the original and resulting strings
//     printf("Original String: \"%s\"\n", inputString);
//     printf("Resulting String: \"%s\"\n", resultString);

//     // Free the memory allocated for the resulting string
//     free_strmapi_result(resultString);

//     return 0; // Return 0 for successful execution
// }
