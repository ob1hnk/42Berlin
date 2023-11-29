/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:49:44 by hannkang          #+#    #+#             */
/*   Updated: 2023/11/29 19:27:41 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	search_prefix(const char *s1, const char *set)
{
	int		i;

	i = 0;
	while (s1[i] && (ft_strchr(set, s1[i])))
	{
		i++;
	}
	return (i);
}

int	search_suffix(const char *s1, const char *set)
{
	int		i;

	i = ft_strlen(s1) - 1;
	while (i && (ft_strrchr(set, s1[i])))
	{
		i--;
	}
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char			*new_string;
	int				p;
	int				s;

	p = search_prefix(s1, set);
	s = search_suffix(s1, set);
	new_string = (char *)malloc((s - p + 2) * sizeof(char));
	if (!new_string || p > s)
		return (NULL);
	ft_strlcpy(new_string, s1 + p, s - p + 2);
	return (new_string);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("ft_strlen(s1): %d\n", ft_strlen("lomet"));
// 	printf("%s\n", ft_strtrim("lomet", "tel"));
// }