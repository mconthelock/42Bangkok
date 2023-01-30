/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 11:09:29 by pongsrit          #+#    #+#             */
/*   Updated: 2023/01/29 11:15:55 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("2^0 %d\n", ft_iterative_power(2, 0));
	printf("2^1 %d\n", ft_iterative_power(2, 1));
	printf("2^2 %d\n", ft_iterative_power(2, 2));
	printf("2^3 %d\n", ft_iterative_power(2, 3));
	printf("2^4 %d\n", ft_iterative_power(2, 4));
	printf("2^5 %d\n", ft_iterative_power(2, 5));
	printf("2^6 %d\n", ft_iterative_power(2, 6));
	printf("2^7 %d\n", ft_iterative_power(2, 7));
	printf("2^8 %d\n", ft_iterative_power(2, 8));
	printf("2^9 %d\n", ft_iterative_power(2, 9));
	printf("2^10 %d\n", ft_iterative_power(2, 10));
}
