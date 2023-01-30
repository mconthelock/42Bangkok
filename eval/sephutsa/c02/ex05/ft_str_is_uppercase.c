/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephutsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:35:43 by sephutsa          #+#    #+#             */
/*   Updated: 2023/01/29 20:03:49 by sephutsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d %d\n", ft_str_is_uppercase("ASDHGASDJGJHJASDHJ"),
			ft_str_is_uppercase("8723489hdkasjh!^@#*&^"));
	return (0);
}
*/
