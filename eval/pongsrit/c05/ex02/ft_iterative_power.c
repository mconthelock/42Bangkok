/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 11:08:47 by pongsrit          #+#    #+#             */
/*   Updated: 2023/01/29 11:15:30 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;
	int	i;

	i = 0;
	ans = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		ans *= nb;
		i++;
	}
	return (ans);
}
