/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchoeisa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:26:03 by pchoeisa          #+#    #+#             */
/*   Updated: 2023/01/27 15:07:25 by pchoeisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	restr;

	i = 0;
	restr = 1;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 127)
		{	
			restr = 0;
			break ;
		}
	i++;
	}	
	return (restr);
}
