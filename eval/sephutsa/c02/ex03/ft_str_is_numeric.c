/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephutsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:15:11 by sephutsa          #+#    #+#             */
/*   Updated: 2023/01/29 15:32:53 by sephutsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (*str < '0' || *str > '9')
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
	printf("%d %d %d\n", ft_str_is_numeric("01234554089"),
			ft_str_is_numeric("21324x97x20"), ft_str_is_numeric(" "));
	return (0);
}*/
