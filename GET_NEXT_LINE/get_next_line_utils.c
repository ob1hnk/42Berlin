/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:39:16 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/27 22:37:46 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	unsigned int	n;

	n = 0;
	while (*(str + n))
	{
		n++;
	}
	return (n);
}

char	*ft_strjoinb(char const *s1, char const *s2, size_t buffer_size)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + buffer_size + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (j < buffer_size)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	char	*t;

	t = (char *)s;
	c %= 256;
	while (*t && *t != c)
	{
		t++;
	}
	if (*t == c)
		return (t);
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	int		s_len;
	char	*p;

	s_len = ft_strlen(s) + 1;
	p = (char *)malloc(s_len * sizeof(char));
	if (p)
		ft_strlcpy(p, s, s_len);
	return (p);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
