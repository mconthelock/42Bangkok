/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:03:37 by kraddhan          #+#    #+#             */
/*   Updated: 2023/01/27 20:38:23 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;
	
	x  = *a / *b;
	y  = *a % *b;
	*a = x;
	*b = y;
}
/*int	main(void)
{
	int	a = 10;
	int	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("Divided = %d""\n""Remainder = %d", a, b);
	return (0);
}*/
