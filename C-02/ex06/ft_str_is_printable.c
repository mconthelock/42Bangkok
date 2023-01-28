/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:57:54 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/28 09:36:19 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	n = ft_str_is_printable(c);
	printf("%d\n", n);
	return (0);
}
*/