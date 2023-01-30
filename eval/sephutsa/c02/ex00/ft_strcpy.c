/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephutsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:16:30 by sephutsa          #+#    #+#             */
/*   Updated: 2023/01/29 19:43:12 by sephutsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int	main(void)
{
    char    buffer[80];

    ft_strcpy(buffer, "Hello ");//function called "ft_strcpy" ^^
    printf("%s\n", buffer);
    return (0);
}*/
