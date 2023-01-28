/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:09:18 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/28 17:08:15 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	total;

	total = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			total *= nb;
			power--;
		}
	}
	return (total);
}
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(2,-1));
	printf("%d\n", ft_iterative_power(-5,-3));
	printf("%d\n", ft_iterative_power(0,0));
	printf("%d\n", ft_iterative_power(2,3));
	printf("%d\n", ft_iterative_power(3,5));
	printf("%d\n", ft_iterative_power(-9,2));
	printf("%d\n", ft_iterative_power(-9,3));
	return (0);
}
