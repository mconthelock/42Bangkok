/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephutsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:16:28 by sephutsa          #+#    #+#             */
/*   Updated: 2023/01/29 22:30:19 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = ft_str_is_alpha("ABDCJKSSD");
	b = ft_str_is_alpha("acvdfdfgg");
	c = ft_str_is_alpha("ASDHnmmSDFS");
	d = ft_str_is_alpha(":!sd7*023");
	printf("%d %d %d %d\n", a, b, c, d);
	return (0);
}
