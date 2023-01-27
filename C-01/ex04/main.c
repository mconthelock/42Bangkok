/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:14:07 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/27 17:14:45 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 12;
	b = 4;
	div = &a;
	mod = &b;
	printf("Before: Div => %d, Mod => %d\n", a, b);
	ft_ultimate_div_mod(div, mod);
	printf("After: Div => %d, Mod => %d\n", a, b);
	return (0);
}
