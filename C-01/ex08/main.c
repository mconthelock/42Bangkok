/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 23:01:28 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/27 23:04:03 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

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
