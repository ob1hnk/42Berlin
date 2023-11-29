/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:10:13 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/29 20:56:32 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**malloc_rr(const char *s, char c)
{
	char	**rr;
	int		i_s;
	int		i_rr;

	i_s = 0;
	i_rr = 0;
	while (s[i_s++])
	{
		if (s[i_s] == c)
			i_rr++;
	}
	rr = (char **)malloc((i_rr + 1) * sizeof(char *));
	if (!rr)
		return (NULL);
	return (rr);
}

char	*malloc_r(char **array, int temp, int i_rr)
{
	array[i_rr] = (char *)malloc((temp + 1) * sizeof(char));
	if (!array[i_rr])
	{
		free(array);
		return (NULL);
	}
	array[i_rr][temp] = 0;
	return (array[i_rr]);
}

// char	*white_space(const char *s)
// {
// 	char	*ss;
// 	int	i;

// 	i = 0;
// 	while (s[i++])
// 	{
// 		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
// 		{
// 			i++;
// 		}
// 	}
// }

char	**ft_split(const char *s, char c)
{
	char			**array;
	unsigned int	temp;
	int				i_rr;
	int				i_s;

	array = malloc_rr(s, c);
	temp = 0;
	i_rr = 0;
	i_s = 0;
	while (s[i_s++])
	{
		temp++;
		if (s[i_s++] == c)
		{
			array[i_rr] = malloc_r(array, temp, i_rr);
			ft_strlcpy(array[i_rr], ft_strchr(s + i_s, c) - temp, temp + 1);
			array[i_rr++][temp] = 0;
			temp = 0;
		}
	}
	array[i_rr] = malloc_r(array, temp, i_rr);
	ft_strlcpy(array[i_rr], s + ft_strlen(s) - temp, temp + 1);
	array[i_rr][temp] = 0;
	return (array);
}

// #include <stdlib.h>
// #include <stdio.h>

// // Function to free the memory allocated for the result of ft_split
// void free_split_result(char **result) {
// 	free(result);
// }

// // Example main function
// int main() {
//     // Test string and delimiter character
//     const char *inputString = "return&zx&array&like";
//     char delimiter = '&';

//     // Call the ft_split function
//     char **resultArray = ft_split(inputString, delimiter);

//     // Check if the allocation was successful
//     if (resultArray == NULL) {
//         fprintf(stderr, "String splitting failed.\n");
//         return 1; // Return an error code
//     }

//     // Print the original and split strings
//     printf("Original String: \"%s\"\n", inputString);

//     // Print the split strings until NULL is encountered
//     for (int i = 0; resultArray[i] != NULL; i++) {
//         printf("Split String %d: \"%s\"\n", i + 1, resultArray[i]);
//     }

//     // Free the memory allocated for the result array
//     free_split_result(resultArray);

//     return 0; // Return 0 for successful execution
// }
