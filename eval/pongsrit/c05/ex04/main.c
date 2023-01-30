/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 11:09:29 by pongsrit          #+#    #+#             */
/*   Updated: 2023/01/29 11:24:18 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("0 %d\n", ft_fibonacci(0));
	printf("1 %d\n", ft_fibonacci(1));
	printf("2 %d\n", ft_fibonacci(2));
	printf("3 %d\n", ft_fibonacci(3));
	printf("4 %d\n", ft_fibonacci(4));
	printf("5 %d\n", ft_fibonacci(5));
	printf("6 %d\n", ft_fibonacci(6));
	printf("7 %d\n", ft_fibonacci(7));
	printf("8 %d\n", ft_fibonacci(8));
	printf("9 %d\n", ft_fibonacci(9));
	printf("10 %d\n", ft_fibonacci(10));
}
