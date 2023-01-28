/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:19:28 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/28 17:10:17 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	total;

	total = 1;
	if (power == 0 && nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_power(2,-1));
	printf("%d\n", ft_recursive_power(-5,-3));
	printf("%d\n", ft_recursive_power(0,0));
	printf("%d\n", ft_recursive_power(2,3));
	printf("%d\n", ft_recursive_power(3,5));
	printf("%d\n", ft_recursive_power(-9,2));
	printf("%d\n", ft_recursive_power(-9,3));
	return (0);
}
