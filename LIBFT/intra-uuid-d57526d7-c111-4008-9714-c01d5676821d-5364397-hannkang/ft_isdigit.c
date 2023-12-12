/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:45:33 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/22 20:45:42 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

// #include <stdlib.h>
// #include <stdio.h>
// int	main()
// {
// 	char c;
// 	printf ("Enter sth: ");
//  	fgets (&c, 4, stdin);
// 	if (ft_isdigit(c)) printf("is digit.");
// 	else	printf("is not digit.");
// 	return (0);
// }