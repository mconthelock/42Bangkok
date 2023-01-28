/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 21:21:57 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/26 23:20:59 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
	{
		printf("%d\n", i);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	int		cmp1;
	int		cmp2;
	
	s1 = "1234";
	s2 = "4455";
	cmp1 = strcmp(s1, s2);
	printf("Compare By STMCMP : %d\n", cmp1);
	cmp2 = ft_strcmp(s1, s2);
	printf("Compare By FT_STRCMP : %d\n", cmp2);
	return (0);
}
*/