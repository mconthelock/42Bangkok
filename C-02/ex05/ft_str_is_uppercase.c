/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:51:07 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/28 09:33:04 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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

	c = "AZXC.R";
	n = ft_str_is_uppercase(c);
	printf("%d\n", n);
	return (0);
}
*/