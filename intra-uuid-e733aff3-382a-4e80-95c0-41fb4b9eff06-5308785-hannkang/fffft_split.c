/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fffft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:10:13 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/21 21:13:21 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*

	seg fault while freeing array


*/


#include <stdio.h>
#include "libft.h"

void print_result_array(char **resultArray) {
    // Print each string until NULL is encountered
    for (int i = 0; resultArray[i] != NULL; i++) {
        printf("Result Array[%d]: \"%s\"\n", i, resultArray[i]);
    }
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	int	i_rr;
	unsigned int	templength;
	int	i;
	i_rr = 0;
	templength = 0;
	i = 0;
	while (s[i++])
	{
		if (s[i] == c) i_rr++;
	}
	array = (char **)malloc((i_rr + 1) * sizeof(char *));
	if (!array) return (NULL);
	i = 0;
	i_rr = 0;
	while (s[i++])
	{
		templength++;
		if (s[i] == c)
		{
			array[i_rr] = (char *)malloc((templength + 1) * sizeof(char));
				if (!array[i_rr])  return (NULL);//printf("failed malloc\n");
			ft_strlcpy(array[i_rr], ft_strchr(s + i, c) - templength, templength);
			array[i_rr][templength] = '\0';
			
			i_rr++;
			templength = 0;
			i++;
		}
	}
	array[i_rr] = (char *)malloc((templength + 1) * sizeof(char));
		if (!array[i_rr]) return (NULL);
	ft_strlcpy(array[i_rr], s + ft_strlen(s) - templength, templength);
	array[i_rr][templength] = '\0';
	i_rr++;

	print_result_array(array);

	while (*array++)
	{
		free(*array);
	}
	printf("done!\n");
	
	return (array);
}

#include <stdlib.h>

// Function to free the memory allocated for the result of ft_split
void free_split_result(char **result) {
//     while (*result) {
//         free(*result);
//         result++;
//     }
    free(result);
}

// Example main function
int main() {
    // Test string and delimiter character
    const char *inputString = "Hello&World&How&Are&Youu";
    char delimiter = '&';

    // Call the ft_split function
    char **resultArray = ft_split(inputString, delimiter);

    // Check if the allocation was successful
    if (resultArray == NULL) {
        fprintf(stderr, "String splitting failed.\n");
        return 1; // Return an error code
    }

    // Print the original and split strings
    printf("Original String: \"%s\"\n", inputString);

    // Print the split strings until NULL is encountered
    for (int i = 0; resultArray[i] != NULL; i++) {
        printf("Split String %d: \"%s\"\n", i + 1, resultArray[i]);
    }

	printf("before\n");
    // Free the memory allocated for the result array
    free_split_result(resultArray);
	printf("after\n");

    return 0; // Return 0 for successful execution
}
