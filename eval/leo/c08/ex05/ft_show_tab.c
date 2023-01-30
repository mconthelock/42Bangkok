/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:25:45 by luchitel          #+#    #+#             */
/*   Updated: 2023/01/30 20:37:30 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_negative(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		return (147483648);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		return (-nb);
	}
	else
	{
		return (nb);
	}
}

void	ft_putnbr(int nb)
{
	int	digit;
	int	delimiter;

	nb = is_negative(nb);
	delimiter = 1;
	digit = nb;
	while (digit >= 10)
	{
		digit = digit / 10;
		delimiter *= 10;
	}	
	while (delimiter > 0)
	{
		ft_putchar((nb / delimiter) % 10 + '0');
		nb = nb % delimiter;
		delimiter /= 10;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
