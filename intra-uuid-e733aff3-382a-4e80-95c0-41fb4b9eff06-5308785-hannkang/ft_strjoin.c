/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:11:17 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/17 17:14:57 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*p;

	p = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (!p) return (NULL);
	ft_strlcat(p, s1, ft_strlen(s1));
	ft_strlcat(p, s2, ft_strlen(s2));
	return (p);
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype for the function
char *ft_strjoin(char const *s1, char const *s2);

int main() {
    // Test strings
    const char *prefix = "Hello, ";
    const char *suffix = "World!";
    
    // Call the ft_strjoin function
    char *result = ft_strjoin(prefix, suffix);

    // Check if the allocation was successful
    if (result == NULL) {
        fprintf(stderr, "String concatenation failed.\n");
        return 1; // Return an error code
    }

    // Print the result
    printf("Result of concatenation: %s\n", result);

    // Free the allocated memory for the result
    free(result);

    return 0; // Return 0 for successful execution
}
