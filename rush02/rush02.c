/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:03:58 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/29 13:13:52 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_readfile(char *dict, char *filename)
{
	char	*allocate; 
	int	files;
	int	buffer;
	int	i;

	allocate = (char*)malloc(2000 * sizeof(char));
	files = open(filename, O_RDONLY);
	if (files < 0)
	{
		write(1, "Error\n", 20);
		return (0);
	}
	buffer = read(files, allocate, 2000);
	if (buffer < 0)
	{
		write(1, "Error\n", 20);
		return (0);
	}
	dict = (char*)malloc((buffer + 1) * sizeof(char));
	i = 0;
	while (i < buffer)
	{
		dict[i] = allocate[i];
		i++;
	}
	free(allocate);
	return (dict);
}

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

int	ft_power(int d)
{
	int i;
	int n;

	i = 0;
	n = 1;
	while (i < d)
	{
		n = n*10;
		i++;
	}
	return n;
}


void	ft_print_dict(char *str, int len, char *dict)
{
	int i = 0;
	while (str[i] != '\0')
	{
		ft_strstr(*dict, ft_power(i));
		//printf("%d\n", ft_power(i));
		i++;
	}

}

int	main(int argc, char *argv[])
{
	char	*filename = "numbers.dict";
	char	*dict;
	int	len;

	dict = ft_readfile(dict, filename);
	len  = ft_strlen(argv[1]);
	ft_print_dict(argv[1], len, dict);
	return (0);
}
