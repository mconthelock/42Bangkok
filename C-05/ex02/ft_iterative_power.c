/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:47:21 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/30 19:27:33 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		n *= nb;
		power--;
	}
	return (n);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(0,3));
	printf("%f\n", pow(0, 3));
	return (0);
}
*/
