/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyajai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:12:25 by tyajai            #+#    #+#             */
/*   Updated: 2023/01/28 19:12:31 by tyajai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac == 0)
	{
		return (0);
	}
	while (ac > 1)
	{
		i = -1;
		while (av[ac - 1][++i])
		{
			write(1, &av[ac - 1][i], 1);
		}
		write(1, "\n", 1);
		ac--;
	}
	return (0);
}
