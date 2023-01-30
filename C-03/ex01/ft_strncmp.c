/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:07:19 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/30 09:10:13 by csewanam         ###   ########.fr       */
/*   Updated: 2023/01/28 20:50:00 by csewanam         ###   ########.fr       */
/*   Updated: 2023/01/29 00:37:57 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) || (s1[i] != '\0' && s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
		{
			++i;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i - 1] - s2[i - 1]);
}

int main(void)
{
    char    s1[] = "1734";
    char    s2[] = "\0A35";

    printf("%d\n", ft_strncmp(s1, s2, 3));
    printf("%d\n", strncmp(s1, s2, 3));
    return (0);
}

