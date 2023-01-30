/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 11:26:48 by pongsrit          #+#    #+#             */
/*   Updated: 2023/01/29 11:41:47 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	nb;

	nb = 0;
	while (nb <= 100)
	{
		printf("%d is prime number %d \n", nb, ft_is_prime(nb));
		nb++;
	}
}
