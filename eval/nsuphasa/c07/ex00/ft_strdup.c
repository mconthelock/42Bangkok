/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:25:53 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/29 21:36:07 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;
	int		i;

	size = 0;
	while (src[size])
		size++;
	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int	main()
{
	char	*str = "Hello World";
	char	*real = strdup(str);
	char	*fake = ft_strdup(str);

	printf("Original String: %s\n", str);
	printf("Duplicate String (real): %s\n", real);
	printf("Duplicate String (fake): %s\n", fake);

	// deallocate to prevent memory leak
	free(real);
	free(fake);
	return 0;
}
