/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:14:44 by dlariono          #+#    #+#             */
/*   Updated: 2023/01/29 13:16:20 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (32 <= str[i] && str[i] <= 126)
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
	char src[] = "12321";
	
    //ft_str_is_alpha(src);
	printf("%d\n", ft_str_is_printable(src));
	return (0);
}
*/
