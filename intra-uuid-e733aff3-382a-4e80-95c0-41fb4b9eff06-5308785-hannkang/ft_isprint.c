/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:53:22 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/17 13:13:54 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}

#include <stdlib.h>
#include <stdio.h>
int	main()
{
	char c;
	printf ("Enter sth: ");
 	fgets (&c, 4, stdin);
	if (ft_isprint(c)) printf("is print.");
	else	printf("is not print.");
	return (0);
}