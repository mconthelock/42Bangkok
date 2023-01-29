/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:02:59 by dlariono          #+#    #+#             */
/*   Updated: 2023/01/29 13:08:59 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (48 <= str[i] && str[i] <= 57)
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
	char src[] = "";
	
    //ft_str_is_alpha(src);
	printf("%d\n", ft_str_is_numeric(src));
	return (0);
}
*/
