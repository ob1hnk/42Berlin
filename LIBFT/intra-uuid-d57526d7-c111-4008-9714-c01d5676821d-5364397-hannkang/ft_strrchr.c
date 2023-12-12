/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:44:09 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/06 19:45:52 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	c %= 256;
	while (s[i] != '\0')
	{
		i++;
	}
	while (s[i] != c && i >= 0)
	{
		i--;
	}
	if (i < 0)
		return ((char *) NULL);
	else
		return ((char *)(s + i));
}

// #include <stdio.h>
// int	main()
// {
// 	char *s = "jammabwez";
// 	printf("%p\n", &(*s));
// 	printf("%p\n", strrchr(s, 'a'));
// 	printf("%c", *(strrchr(s, 'a')));
// }