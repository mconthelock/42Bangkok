/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:58:49 by kraddhan          #+#    #+#             */
/*   Updated: 2023/01/28 17:38:56 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>//

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a = 10, b = 3, div, mod;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d, remainder %d\n", a, b, div, mod);
	return (0);
}*/
