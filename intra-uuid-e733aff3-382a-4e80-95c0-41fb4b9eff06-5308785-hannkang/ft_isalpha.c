/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:43:36 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/17 13:13:45 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{	
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}

#include <stdlib.h>
#include <stdio.h>
int	main()
{
	char c;
	printf ("Enter sth: ");
 	fgets (&c, 4, stdin);
	if (ft_isalpha(c)) printf("is alpha.");
	else	printf("is not alpha.");
	return (0);
}