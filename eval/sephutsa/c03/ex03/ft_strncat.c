/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephutsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:13:19 by sephutsa          #+#    #+#             */
/*   Updated: 2023/01/30 19:24:19 by sephutsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	check;

	count = 0;
	check = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (check < nb && src[check] != '\0')
	{
		dest[count + check] = src[check];
		check++;
	}
	dest[count + check] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[50];
	char	src[50];

	dest[50] = "THISISTEST";
	src[50] = "ILOVEYOU";
	printf("%s", ft_strncat(dest, src, 5));
}
*/
