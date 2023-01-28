/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:51:39 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/27 18:59:28 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	n[] = {1, 5, 2, 6, 3, 9, 7};
	int	*tab;
	int	i;

	tab = n;
	ft_rev_int_tab(tab, 7);
	i = 0;
	while (i < 7)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}
