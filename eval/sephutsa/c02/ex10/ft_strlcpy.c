/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephutsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:41:51 by sephutsa          #+#    #+#             */
/*   Updated: 2023/01/29 22:43:36 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}
int	main(void)
{
	char			dest[6];
	unsigned int	size;
	//char			src[];

	char src[] = "Hellsssewuir9798";
	size = ft_strlcpy(dest, src, sizeof(dest));
	printf("Result: %s\n", dest);
	printf("Size: %d\n", size);
	return (0);
}
