/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyajai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 21:00:45 by tyajai            #+#    #+#             */
/*   Updated: 2023/01/29 21:51:32 by tyajai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	i++;
	}
	return (0);
}

void	ft_sort_params(int c, char **v)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < c)
	{
		j = i + 1;
		while (j < c)
		{
			if (ft_strcmp(v[i], v[j]) > 0)
			{
				tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}
		j++;
		}
	i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 0)
	{
		return (0);
	}
	ft_sort_params(ac, av);
	i = 0;
	while (++i < ac)
	{
		j = -1;
		while (av[i][++j])
		{
			write(1, &av[i][j], 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}
