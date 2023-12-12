/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:36:17 by hannkang          #+#    #+#             */
/*   Updated: 2023/12/07 23:03:51 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_space(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' 
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
	{
		i++;
	}
	return (i);
}

int	check_sign(char *str, int *sign, int i)
{
	if (str[i] == '-')
	{
		*sign *= -1;
		return (++i);
	}
	if (str[i] == '+')
		return (++i);
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	val;

	i = 0;
	sign = 1;
	val = 0;
	while (str[i] != '\0')
	{
		i = check_space(str, i);
		i = check_sign(str, &sign, i);
		while ('0' <= str[i] && str[i] <= '9')
		{
			val *= 10;
			val += str[i] - '0';
			i++;
		}
		return (sign * val);
	}
	return (0);
}

// #include <stdlib.h>
// #include <stdio.h>

// int main ()
// {
//   int i;
//   char buffer[256];
//   printf ("Enter a number: ");
//   fgets (buffer, 256, stdin);
//   // i = atoi(buffer);
//   i = ft_atoi(buffer);
//   printf ("The value entered is %d. Its double is %d.\n",i,i*2);
//   return 0;
// }