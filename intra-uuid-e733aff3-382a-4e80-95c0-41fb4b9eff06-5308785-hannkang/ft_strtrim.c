/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:15:43 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/21 19:10:00 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_prefix(const char *s1, const char *set)
{
	unsigned int size_set = ft_strlen(set);
	unsigned int i = 0;
	
	while (s1[i] == set[i] && size_set--)
	{
		i++;
	}
	if (!size_set) return (1);
	return (0);
}

int	ft_suffix(const char *s1, const char *set, unsigned int suffix)
{
	unsigned int	size_s1 = ft_strlen(s1);
	unsigned int	size_set = ft_strlen(set);
	unsigned int	i = 1;
	
	while (i <= ft_strlen(set) && s1[size_s1 - suffix - i] == set[size_set - i])
	{
		i++;
	}
	if (i > ft_strlen(set)) return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*p;
	unsigned int	size_set;
	unsigned int	size_p;
	unsigned int	prefix;
	unsigned int	suffix;
	

	size_set = ft_strlen(set);
	size_p = ft_strlen(s1);
	prefix = 0;
	suffix = 0;
	while (ft_prefix(s1 + prefix, set))
	{
		prefix += size_set;
		size_p -= size_set;
	}
	if (ft_suffix(s1 + prefix, set, suffix) == 1) printf("is 1");
	while (ft_suffix(s1 + prefix, set, suffix))
	{
		suffix += size_set;
		size_p -= size_set;
	}

	p = (char *)malloc((size_p + 1) * sizeof(char));
	ft_strlcpy(p, s1 + prefix, size_p);
	p[size_p] = '\0';
	return (p);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     // Test string and set of characters to trim
//     const char *originalString = "setsetHello, World!setsetset";
//     const char *trimSet = "set";

//     // Call the ft_strtrim function
//     char *trimmedString = ft_strtrim(originalString, trimSet);

//     // Check if the allocation was successful
//     if (trimmedString == NULL) {
//         fprintf(stderr, "String trimming failed.\n");
//         return 1; // Return an error code
//     }

//     // Print the original and trimmed strings
//     printf("Original String: \"%s\"\n", originalString);
//     printf("Trimmed String: \"%s\"\n", trimmedString);

//     // Free the allocated memory for the trimmed string
//     free(trimmedString);

//     return 0; // Return 0 for successful execution
// }
