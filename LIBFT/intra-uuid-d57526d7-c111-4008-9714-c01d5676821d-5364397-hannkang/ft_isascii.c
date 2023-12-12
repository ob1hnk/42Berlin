/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:49:59 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/17 13:13:48 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

// #include <stdlib.h>
// #include <stdio.h>
// int	main()
// {
// 	char c;
// 	printf ("Enter sth: ");
//  	fgets (&c, 4, stdin);
// 	if (ft_isascii(c)) printf("is ascii.");
// 	else	printf("is not ascii.");
// 	return (0);
// }