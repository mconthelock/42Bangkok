/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 18:42:47 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/29 18:42:49 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		total_length;

	if (size == 0)
	{
		result = malloc(sizeof(char));
		*result = '\0';
		return (result);
	}
	total_length = 0;
	i = -1;
	while (++i < size)
		total_length += ft_strlen(strs[i]);
	total_length += ft_strlen(sep) * (size - 1);
	result = malloc(total_length + 1);
	i = -1;
	while (++i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
	}
	result[total_length] = '\0';
	return (result);
}
/* 
int main()
{
	char s1[] = "Hello";
	char s2[] = "World";
	char s3[] = "I";
	char s4[] = "am";
	char s5[] = "chatGPT";
	char s6[] = ",";
	char *strs[] = {s1, s2, s3, s4, s5};
	printf("%s\n", ft_strjoin(5, strs, s6));
}
 */