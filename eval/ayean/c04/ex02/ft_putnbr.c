/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayean <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:05:08 by ayean             #+#    #+#             */
/*   Updated: 2023/01/29 14:51:20 by ayean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	is_min(int *nb)
{
	write(1, "-2", 2);
	*nb = 147483648;
}

void	ft_putnbr(int nb)
{
	int	div;
	int	temp;

	div = 1;
	if (nb == -2147483648)
		is_min (&nb);
	else if (nb < 0)
	{	
		nb = nb * -1;
		write (1, "-", 1);
	}
	temp = nb;
	while (temp > 9)
	{
		temp = temp / 10;
		div *= 10;
	}
	while (div != 0)
	{
		temp = nb / div % 10 + '0';
		write(1, &temp, 1);
		div /= 10;
	}	
}
/*
int	main(void)
{	
	ft_putnbr(-2147483648);
	write (1, "\n", 1);
	return (0);
}
*/
