/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:15:02 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/28 17:04:00 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > 0)
	{
		total *= nb;
		nb--;
	}
	return (total);
}
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_iterative_factorial(1));
	printf("%d\n",ft_iterative_factorial(5));
	printf("%d\n",ft_iterative_factorial(0));
	printf("%d\n",ft_iterative_factorial(-1));
	printf("%d\n",ft_iterative_factorial(-2));
	printf("%d\n",ft_iterative_factorial(4));
	return (0);
}
