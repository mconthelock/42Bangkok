/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:09:04 by luchitel          #+#    #+#             */
/*   Updated: 2023/01/30 17:55:56 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
} t_stock_str;

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int	is_negative(int nb);
void	ft_putnbr(int nb);
void	ft_show_tab(struct s_stock_str *par);
int	ft_strlen(char *str);

#endif
