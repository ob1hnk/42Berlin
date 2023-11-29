/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:52:23 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/29 18:13:48 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(*little))
		return ((char *)big);
	while (big[i] && len)
	{
		j = 0;
		while (big[i] == little[j] && len--)
		{
			i++;
			j++;
			if (j == ft_strlen(little))
				break ;
		}
		if (j == ft_strlen(little))
			break ;
		if (big[i] != little[j])
			i++;
		len--;
	}
	if (j == ft_strlen(little))
		return ((char *)(&big[i - j]));
	return (NULL);
}

// int	main()
// {
// 	char	big[30] = "lorem ipsum dolor sit amet";
// 	char	little[7] = "ipsumm";
// 	printf("big[0]: %p\n", big);
// 	printf("strnstr: %p\n", ft_strnstr(big, little, 30));

// }