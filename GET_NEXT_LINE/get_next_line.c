/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 02:55:51 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/27 23:03:56 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

static char	*paste_buffer(int fd, char *out)
{
	char	buffer[BUFFER_SIZE];
	int		read_val;
	char	*temp;
	int		i;

	read_val = 1;
	while (read_val)
	{
		read_val = read(fd, buffer, BUFFER_SIZE);
		if (read_val == -1)
			return (NULL);
		else if (!read_val)
			break ;
		temp = ft_strjoinb(out, buffer, BUFFER_SIZE);
		free(out);
		out = ft_strdup(temp);
		free(temp);
		i = 0;
		while (i < BUFFER_SIZE)
			buffer[i++] = 0;
	}
	return (out);
}

static char	*get_leftovers(char *out)
{
	size_t	offset;

	offset = 0;
	if (!ft_strchr(out, '\n'))
		return (NULL);
	while (out[offset] != '\n')
		offset++;
	if (out[offset + 1] == '\0')
		return (NULL);
	return (ft_strdup(out + offset + 1));
}

static char	*trim_end(char *out)
{
	size_t	offset;

	offset = 0;
	if (!ft_strchr(out, '\n'))
		return (out);
	while (out[offset] != '\n')
		offset++;
	if (out[offset] == '\n')
	{
		while (out[++offset])
			out[offset] = 0;
	}
	return (out);
}

char	*get_next_line(int fd)
{
	char		*out;
	static char	*leftovers;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	if (leftovers)
		out = ft_strdup(leftovers);
	else
		out = ft_strdup("");
	out = paste_buffer(fd, out);
	if (!ft_strlen(out))
	{
		free(out);
		return (NULL);
	}
	free(leftovers);
	leftovers = get_leftovers(out);
	out = trim_end(out);
	return (out);
}
