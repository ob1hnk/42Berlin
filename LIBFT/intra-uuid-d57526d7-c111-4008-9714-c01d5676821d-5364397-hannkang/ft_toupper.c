/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:01:55 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/17 13:14:50 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <stdlib.h>
// #include <stdio.h>
// int	main()
// {
// 	char c;
// 	printf ("Enter sth: ");
//  	fgets (&c, 4, stdin);
// 	printf("%c", ft_toupper(c));
// 	return (0);
// }