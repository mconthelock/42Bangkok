/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:09:37 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/27 15:12:50 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 10;
	b = 3;
	*div = &a;
	*mod = &b;
	printf("Before: Div => %d, Mod %d\n", a, b);
	ft_div_mod(a, b, div, mod);
	printf("After: Div => %d, Mod %d\n", a, b);
	return (0);
}
