/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:33:12 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/24 22:24:55 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != ' ')
		{
			return (0);
		}
		++i;
	}
	return (1);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && str[i] != ' ')
		{
			return (0);
		}
		++i;
	}
	return (1);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && str[i] != ' ')
		{
			return (0);
		}
		++i;
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (n == 0)
		{
			if (str[i] >= 'a' || str[i] <= 'z')
				str[i] = str[i] - 32;
			++n;
		}
		else if (str[i] == ' ')
		{
			n= 0;
		}
		printf("%d\n", n);
		++i;
	}
	return (str);
}
