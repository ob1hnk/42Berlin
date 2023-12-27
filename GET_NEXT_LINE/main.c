/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:27:05 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/27 21:53:26 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(void)
{
	int	fd;
	int	i;

	i = 0;
	fd = open("sampletext.txt", O_RDONLY);
	if (fd == -1)
		return (-1);
	while (i < 4)
	{
		printf("next line: %s\n", get_next_line(fd));
		i++;
	}
}
