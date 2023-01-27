/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphimsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:15:08 by sphimsir          #+#    #+#             */
/*   Updated: 2023/01/26 13:16:07 by sphimsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ans;

	i = 1;
	ans = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		ans *= i;
		i ++;
	}
	return (ans);
}
