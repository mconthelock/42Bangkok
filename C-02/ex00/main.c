/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 23:11:15 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/27 23:15:36 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[20];
	char	dest[20];

	src = "Source text";
	ft_strcpy(dest, src);
	printf("Result ft_strcpy:  %s\n", dest);
	return (0);
}
