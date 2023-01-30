/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephutsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:59:31 by sephutsa          #+#    #+#             */
/*   Updated: 2023/01/29 22:25:21 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n && *(dest + i) != '\0')
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
int     main(void)
{
    char    buffer[15];

    printf("Expecting:\nabcdefg\n123456\nabc456g\nabc456g\n\n");
    printf("%s\n", ft_strncpy(buffer, "abcdefg", 10));
	printf("%s\n", ft_strncpy(buffer, "1234567", 6));
	printf("%s\n", ft_strncpy(buffer, "abcdefg", 3));
	printf("%s\n", ft_strncpy(buffer, "*******", 0));
	return (0);
}
