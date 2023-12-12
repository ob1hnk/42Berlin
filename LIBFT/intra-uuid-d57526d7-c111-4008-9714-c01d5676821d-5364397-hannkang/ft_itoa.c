/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:13:39 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/06 19:59:17 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	get_digits(int n)
{
	size_t	i;

	i = 1;
	while (n / 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str_num;
	size_t		digits;
	long int	num;

	num = n;
	digits = get_digits(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	str_num = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str_num)
		return (NULL);
	*(str_num + digits) = 0;
	while (digits--)
	{
		*(str_num + digits) = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		*(str_num + 0) = '-';
	return (str_num);
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