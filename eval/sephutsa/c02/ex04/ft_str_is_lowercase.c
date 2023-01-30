/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephutsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:29:52 by sephutsa          #+#    #+#             */
/*   Updated: 2023/01/29 19:42:58 by sephutsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
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
	printf("%d %d\n", ft_str_is_lowercase("asdasdadasdasd"),
			ft_str_is_lowercase("3289647sjkahdui-0xv@&!*&^$"));
	return (0);
}
*/
