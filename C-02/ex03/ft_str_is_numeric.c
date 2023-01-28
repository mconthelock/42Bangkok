/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:27:19 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/28 09:21:09 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != ' ')
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

	c = "1234";
	n = ft_str_is_numeric(c);
	printf("%d\n", n);
	return (0);
}
*/
