/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:07:19 by csewanam          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/01/30 08:47:24 by csewanam         ###   ########.fr       */
=======
<<<<<<< HEAD
/*   Updated: 2023/01/28 20:50:00 by csewanam         ###   ########.fr       */
=======
/*   Updated: 2023/01/29 00:37:57 by csewanam         ###   ########.fr       */
>>>>>>> 7c62b4e520bb63037f56c1c03a834f3875413060
>>>>>>> origin
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
<<<<<<< HEAD
	return (s1[i - 1] - s2[i - 1]);
=======
	return (s1[i -1] - s2[i - 1]);
>>>>>>> 7c62b4e520bb63037f56c1c03a834f3875413060
}

int main(void)
{
<<<<<<< HEAD
	char s1[] = "3333";
	char s2[] = "34345";
	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n", strncmp(s1, s2, 3));
=======
    char    s1[] = "1734";
    char    s2[] = "\0A35";

    printf("%d\n", ft_strncmp(s1, s2, 3));
    printf("%d\n", strncmp(s1, s2, 3));
>>>>>>> 7c62b4e520bb63037f56c1c03a834f3875413060
    return (0);
}

