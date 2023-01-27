/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphimsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:17:37 by sphimsir          #+#    #+#             */
/*   Updated: 2023/01/26 15:29:30 by sphimsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime_(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	is_prime;

	if (nb <= 1)
		return (2);
	is_prime = nb;
	while (ft_is_prime_(is_prime) == 0)
	{
		is_prime++;
	}
	return (is_prime);
}
