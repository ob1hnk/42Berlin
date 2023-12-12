/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:10:13 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/06 19:56:21 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	temp;
	int	i;

	temp = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			temp++;
		if (i > 0 && s[i] != c && s[i - 1] == c)
			temp++;
		i++;
	}
	return (temp);
}

char	**malloc_array(char **array, const char *s, char c)
{
	int	count;
	int	i_s;
	int	x;

	count = 0;
	i_s = 0;
	x = 0;
	while (s[i_s])
	{
		if (s[i_s] != c)
			count++;
		if ((s[i_s] == c && i_s > 0 && s[i_s - 1] != c)
			|| (s[i_s] != c && s[i_s + 1] == '\0'))
		{
			array[x] = malloc(sizeof(char) * (count + 1));
			if (!array[x])
				return (NULL);
			count = 0;
			x++;
		}
		i_s++;
	}
	return (array);
}

char	**copy_array(char **array, const char *s, char c)
{
	int	i_s;
	int	x;
	int	y;

	i_s = 0;
	x = 0;
	y = 0;
	while (s[i_s])
	{
		if (s[i_s] != c)
			array[x][y++] = s[i_s];
		if (s[i_s] != c && s[i_s + 1] == '\0')
			array[x][y] = '\0';
		if (s[i_s] == c && i_s > 0 && s[i_s - 1] != c)
		{
			array[x][y] = '\0';
			x++;
			y = 0;
		}
		i_s++;
	}
	return (array);
}

char	**merror(char **array)
{
	int	i_s;

	i_s = 0;
	while (array[i_s])
	{
		free(array[i_s]);
		array[i_s] = NULL;
		i_s++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		wordcount;

	if (!s)
	{
		array = malloc(sizeof(char) * 1);
		if (!array)
			return (NULL);
		*array = NULL;
		return (array);
	}
	wordcount = count_words(s, c);
	array = malloc(sizeof(*array) * (wordcount + 1));
	if (!array)
		return (NULL);
	if (malloc_array(array, s, c))
	{
		copy_array(array, s, c);
		array[wordcount] = NULL;
	}
	else
		array = merror(array);
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
