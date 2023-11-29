/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:13:39 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/29 21:02:07 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	get_pos_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n / 10)
	{
		len++;
		n /= 10;
	}
	len++;
	return (len);
}

int	get_len(int n, int *pos)
{
	unsigned int	len;

	if (n < 0)
	{
		len = get_pos_len(n * -1) + 1;
		n *= -1;
		*pos = 0;
	}
	else
		len = get_pos_len(n);
	return (len);
}

char	*ft_itoa(int n)
{
	char			*result;
	unsigned int	len;
	int				pos;

	pos = 1;
	len = get_len(n, &pos);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (n / 10)
	{
		printf("put %d in %d", n % 10, len - 1);
		result[--len] = '0' + n % 10;
		n /= 10;
	}
	if (!pos)
	{
		result[1] = '0' + n;
		result[0] = '-';
	}
	else
		result[0] = '0' + n;
	return (result);
}

// #include <stdio.h>
// #include <stdlib.h>

// // Function to free the memory allocated for the result of ft_itoa
// void free_itoa_result(char *result) {
//     free(result);
// }

// // Example main function
// int main() {
//     // Test integers
//     int positiveNumber = 3875;
//     int negativeNumber = -670;

//     // Call the ft_itoa function
//     char *resultPositive = ft_itoa(positiveNumber);
//     char *resultNegative = ft_itoa(negativeNumber);

//     // Check if the allocation was successful
//     if (resultPositive == NULL || resultNegative == NULL) {
//         fprintf(stderr, "Integer to string conversion failed.\n");

//         // Free the memory allocated for the results
//         free_itoa_result(resultPositive);
//         free_itoa_result(resultNegative);

//         return 1; // Return an error code
//     }

//     // Print the original integers and the resulting strings
//     printf("Original Integer (Positive): %d\n", positiveNumber);
//     printf("Resulting String (Positive): \"%s\"\n", resultPositive);

//     printf("Original Integer (Negative): %d\n", negativeNumber);
//     printf("Resulting String (Negative): \"%s\"\n", resultNegative);

//     // Free the memory allocated for the results
//     free_itoa_result(resultPositive);
//     free_itoa_result(resultNegative);

//     return 0; // Return 0 for successful execution
// }