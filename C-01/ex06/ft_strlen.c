/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 08:59:49 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/22 01:17:47 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}
/*
int	main(void)
{
	int		len;
	char	*str;

	str = "Example";
	len = ft_strlen(str);
	printf("Len : %d\n", len);
	return (0);
}
*/