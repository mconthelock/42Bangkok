/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephutsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:46:45 by sephutsa          #+#    #+#             */
/*   Updated: 2023/01/29 20:20:20 by sephutsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (!*str)
		return (0);
	while (*str)
	{
		if (*str < 32)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[10];

	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = 'd';
	str[4] = ' ';
	str[5] = 'f';
	str[6] = 'g';
	str[7] = 'h';
	str[8] = 'i';
	str[9] = 0;
	printf("%d\n", ft_str_is_printable(str));
	str[4] = 2;
	printf("%d\n", ft_str_is_printable(str));
	return (0);
}*/
