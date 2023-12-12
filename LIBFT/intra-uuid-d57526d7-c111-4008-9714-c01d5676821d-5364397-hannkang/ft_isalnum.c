/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:49:15 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/22 21:27:27 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdlib.h>
// #include <stdio.h>
// int	main()
// {
// 	char c;
// 	printf ("Enter sth: ");
//  	fgets (&c, 4, stdin);
// 	if (ft_isalnum(c)) printf("is alnum.");
// 	else	printf("is not alnum.");
// 	return (0);
// }
