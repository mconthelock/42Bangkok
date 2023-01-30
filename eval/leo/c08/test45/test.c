/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:18:41 by luchitel          #+#    #+#             */
/*   Updated: 2023/01/30 18:08:42 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(void)
{
	char *arr[4] = {"56789", "ghjk", "cvbnm", ""};
	struct s_stock_str *result;

	result = ft_strs_to_tab(4, arr);
	ft_show_tab(result);
	return(0);
}
