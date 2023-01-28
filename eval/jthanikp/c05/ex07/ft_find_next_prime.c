/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 23:14:42 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/28 17:18:14 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb + 1;
	if (nb < 2)
		return (2);
	else if (nb == 2)
		return (2);
	else
	{
		if (is_prime(nb) == 1)
			return (nb);
		while (is_prime(i) != 1)
		{
			if (is_prime(i) == 1)
				return (i);
			i++;
		}
	}
	return (i);
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(-5));
	printf("%d\n", ft_find_next_prime(20));
	printf("%d\n", ft_find_next_prime(30));
	printf("%d\n", ft_find_next_prime(47));
	printf("%d\n", ft_find_next_prime(51));
	printf("%d\n", ft_find_next_prime(110));
	return (0);
}
