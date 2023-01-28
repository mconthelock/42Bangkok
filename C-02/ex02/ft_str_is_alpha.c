/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:01:34 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/28 09:16:28 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			if (str[i] < 'a' || str[i] > 'z')
			{
				if (str[i] != ' ')
				{
					return (0);
				}
			}
		}
		++i;
	}
	return (1);
}
/*
int	main(void)
{
	int		n;
	char	*c;

	c = "@A Testor";
	n = ft_str_is_alpha(c);
	printf("%d\n", n);
	return (0);
}
*/