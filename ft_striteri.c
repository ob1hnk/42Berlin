/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:26:36 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/22 20:47:44 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (*(s + i))
	{
		f(i, s);
		i++;
	}
}

// #include <stdio.h>

// // Example iteration function
// void iterate_function(unsigned int index, char *character) {
//     // Increment the ASCII value of each character
//     if (*character != '\0') {
//         *character += index;
//     }
// }

// // Example main function
// int main() {
//     // Test string
//     char testString[] = "aaaaaaaa";

//     // Call ft_striteri with the iteration function
//     ft_striteri(testString, &iterate_function);

//     // Print the resulting string after iteration
//     printf("Resulting String: \"%s\"\n", testString);

//     return 0; // Return 0 for successful execution
// }
