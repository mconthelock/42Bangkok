/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 10:41:55 by pongsrit          #+#    #+#             */
/*   Updated: 2023/01/29 10:52:28 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	ans;

	ans = 1;
	while (nb > 0)
	{
		ans *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (ans);
}
