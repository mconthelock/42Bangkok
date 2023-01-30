/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephutsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:30:12 by sephutsa          #+#    #+#             */
/*   Updated: 2023/01/30 18:11:43 by sephutsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	check;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	check = 0;
	while (src[check] != '\0')
	{
		dest[count] = src[check];
		count++;
		check++;
	}
	dest[count] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char src[] = "THISISTEST";
	char dest[] = "ILOVEYOU";
	printf("%s", ft_strcat(dest, src));
}
*/
