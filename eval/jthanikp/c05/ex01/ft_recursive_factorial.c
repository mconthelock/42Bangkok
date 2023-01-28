/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:56:53 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/28 17:07:13 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial(1));
	printf("%d", ft_recursive_factorial(5));
	printf("%d", ft_recursive_factorial(0));
	printf("%d", ft_recursive_factorial(-1));
	printf("%d", ft_recursive_factorial(-2));
	printf("%d", ft_recursive_factorial(4));
	return (0);
}
