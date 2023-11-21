/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:49:15 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/17 13:13:40 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') || ('0' <= c && c <= '9'));
}

#include <stdlib.h>
#include <stdio.h>
int	main()
{
	char c;
	printf ("Enter sth: ");
 	fgets (&c, 4, stdin);
	if (ft_isalnum(c)) printf("is alnum.");
	else	printf("is not alnum.");
	return (0);
}