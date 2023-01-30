/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephutsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:31:48 by sephutsa          #+#    #+#             */
/*   Updated: 2023/01/30 20:50:34 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	check;

	check = *s1 - *s2;
	if (*s1 == 0 || *s2 == 0 || check != 0)
	{
		return (check);
	}
	else
	{
		return (ft_strcmp(s1 + 1, s2 + 1));
	}
}

int	main(void)
{

	char test00[] = "Sssssssssssssssssettapong";
	char test01[] = "Settapong gnopatteS";
	printf("%d", ft_strcmp(test00, test01));
}
