/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:44:10 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/21 18:38:39 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}
/*
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
*/