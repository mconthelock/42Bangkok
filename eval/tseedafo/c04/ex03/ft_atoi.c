/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseedafo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:18:19 by tseedafo          #+#    #+#             */
/*   Updated: 2023/01/30 15:55:42 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_atoi(char *str)
{
	int		count;
	int		neg;
	int		nb;

	count = 0;
	neg = 0;
	nb = 0;
	while ((str[count] != '\0') && (str[count] < 48 || str[count] > 57))
	{
		if (str[count] == '-')
			neg++;
			count++;
	}
	while (str[count] >= 48 && str[count] <= 57)
	{
		nb = nb * 10 + str[count] - 48;
		count++;
	}
	if (neg % 2 == 1)
		return (nb *= -1);
	return (nb);
}
int	main(void)
{
	char *str;
	str = " --12345";
		printf("%d\n", ft_atoi(str));
}

