/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:56:53 by dlariono          #+#    #+#             */
/*   Updated: 2023/01/29 13:02:32 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
		{
			k++;
		}
		i++;
	}
	if (i == k || str[0] == '\0' )
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
	char src[] = "sdfASDF";
	
    //ft_str_is_alpha(src);
	printf("%d\n", ft_str_is_alpha(src));
	return (0);
}
*/
