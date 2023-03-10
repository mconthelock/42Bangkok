/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:20:24 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/22 02:13:24 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	*a;
	int	*b;

	i = 0;
	while (i < size)
	{
		n = i + 1;
		while (n < size)
		{
			if (tab[i] > tab[n])
			{
				a = &tab[i];
				b = &tab[n];
				ft_swap(a, b);
			}
			n++;
		}
		++i;
	}	
}
/*
int	main(void)
{
	int	n[] = {9, 4, 8, 11, 9, 6, 3};
	int	*tab;
	int	i;

	tab = n;
	ft_sort_int_tab(tab, 7);
	i = 0;
	while (i < 7)
	{
		printf("%d, ", tab[i]);
		++i;
	}
	return (0);
}
*/