/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 22:54:41 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/27 22:58:22 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	n[] = {1, 2, 3, 4, 5, 6, 7};
	int	*tab;
	int	i;

	tab = n;
	ft_rev_int_tab(tab, 7);
	i = 0;
	while (i < 7)
	{
		printf("%d, ", tab[i]);
		++i;
	}
	return (0);
}
