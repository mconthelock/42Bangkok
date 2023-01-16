/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:59:49 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/14 16:01:33 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char first, char second, char third)
{
	if (first != '0' || second != '1' || third != '2')
	{
		write(1, ", ", 2);
	}	
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &third, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				++c;
			}
			++b;
		}
		++a;
	}
}
