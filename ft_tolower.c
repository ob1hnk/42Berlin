/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:04:43 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/17 13:14:53 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include <stdlib.h>
// #include <stdio.h>
// int	main()
// {
// 	char c;
// 	printf ("Enter sth: ");
//  	fgets (&c, 4, stdin);
// 	printf("%c", ft_tolower(c));
// 	return (0);
// }