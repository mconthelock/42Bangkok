/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:12:04 by dlariono          #+#    #+#             */
/*   Updated: 2023/01/29 13:13:55 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			k++;
		}
		i++;
	}
	if (i == k || str[0] == '\0')
	{
		return (1);
	}
	return (0);
}
/*
#include<stdio.h>
int	main(void)
{
	char dest[] = "";
	char src[] = "sASFDs";
	
    //ft_str_is_alpha(src);
	printf("%d\n", ft_str_is_uppercase(src));
	return (0);
}
*/
