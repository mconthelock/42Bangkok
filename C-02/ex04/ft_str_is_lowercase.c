/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:37:45 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/28 09:26:06 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && str[i] != ' ')
		{
			return (0);
		}
		++i;
	}
	return (1);
}
/*
int	main(void)
{
	char	*c;
	int		n;

	c = "vvbffthbnc xddfq";
	n = ft_str_is_lowercase(c);
	printf("%d\n", n);
	return (0);
}
*/