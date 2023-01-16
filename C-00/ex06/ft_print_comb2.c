/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:04:08 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/14 22:36:18 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nb(int nb)
{
	char	c;
	int		n;

	if (nb <= 9)
	{
		write(1, "0", 1);
		c = nb + 48;
		write(1, &c, 1);
	}
	else
	{
		n = nb / 10;
		c = n + 48;
		write(1, &c, 1);
		n = nb % 10;
		c = n + 48;
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a != 0 || b != 1)
			{
				write(1, ", ", 2);
			}
			ft_print_nb(a);
			write(1, " ", 1);
			ft_print_nb(b);
			++b;
		}
		++a;
	}
}
