/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:25:00 by luchitel          #+#    #+#             */
/*   Updated: 2023/01/30 20:37:18 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

char	*ft_strcpy(char *dest, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = str[i];
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		len;

	len = ft_strlen(src);
	duplicate = (char *)malloc(sizeof(src) * (len + 1));
	if ((void *)0 == duplicate)
		return ((void *)0);
	ft_strcpy(duplicate, src);
	return (duplicate);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strings;
	int			i;

	i = 0;
	strings = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (NULL == strings)
		return ((void *)0);
	while (i < ac)
	{
		strings[i].size = ft_strlen(av[i]);
		strings[i].str = av[i];
		strings[i].copy = ft_strdup(av[i]);
		i++;
	}
	strings[i].str = 0;
	return (strings);
}
