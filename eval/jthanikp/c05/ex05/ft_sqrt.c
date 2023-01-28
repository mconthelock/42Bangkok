/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:37:53 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/28 17:12:21 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (i < nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_sqrt(625));
	printf("%d\n", ft_sqrt(-16));
	printf("%d\n", ft_sqrt(-1));
	return (0);
}
