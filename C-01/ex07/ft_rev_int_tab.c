/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:36:57 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/22 01:51:05 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	temp;

	i = 0;
	n = size - 1;
	while (i <= n)
	{
		temp = tab[i];
		tab[i] = tab[n];
		tab[n] = temp;
		--n;
		++i;
	}
}
