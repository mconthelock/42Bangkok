/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csewanam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:03:58 by csewanam          #+#    #+#             */
/*   Updated: 2023/01/29 17:04:43 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

struct letter {
	char	*value;
	char	*label;
};

struct letter letters[20];

void	ft_set_letters(char *str)
{
	int i;
	int	j;
	int	k;
	char	*n;
	
	i = 0;
	j = 0;
	k = 0;
	n = (char*)malloc(20 * sizeof(char));
	while (str[i] != '\0')
	{
		if (str[i] == ':')
		{
			letters[j].value = n;
			free(n);
			n = (char*)malloc(20 * sizeof(char));
			k = 0;
		}
		else if(str[i] == '\n')
		{
			letters[j].label = n;
			free(n);
			n = (char*)malloc(20 * sizeof(char));
			printf("%s => %s\n", letters[j].value, letters[j].label);
			k = 0;
			j++;	
		}
		else
		{
			n[k] = str[i];	
			k++;
		}
		i++;
	}
	free(n);
}

char    *ft_readfile(char *dict, char *filename)
{
    char    *allocate; 
    int    files;
    int    buffer;
    int    i;

    allocate = (char*)malloc(2000 * sizeof(char));
    files = open(filename, O_RDONLY);
    if (files < 0)
    {
        write(1, "Error\n", 20);
        return (0);
    }
    buffer = read(files, allocate, 2000);
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

int    main(int argc, char *argv[])
{
    char    *filename = "numbers.dict";
    char    *dict;
	int	i;

    dict = ft_readfile(dict, filename);
	ft_set_letters(dict);
	
	i = 0;
	//while (letters[i] != '\0')
	//{
		//printf("%s\n", letters[1].label);
	//}
	free(dict);
    return (0);
}