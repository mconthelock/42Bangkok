/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:06:36 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/27 15:08:42 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	*c;
	int	*d;

	a = 5;
	b = 12;
	c = &a;
	d = &b;
	printf("Before: %d -> %d\n", a, b);
	ft_swap(c, d);
	printf("After: %d -> %d\n", a, b);
	return (0);
}
