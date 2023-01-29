/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:39:05 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/29 21:43:23 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!*range)
		return (-1);
	i = -1;
	while (++i < size)
		(*range)[i] = min + i;
	return (size);
}
int main(void)
{
    int min = 4;
    int max = 3;
    int *range;
    int size = ft_ultimate_range(&range, min, max);
    printf("RANGE: ");
	int	i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");
    printf("SIZE: %d\n", size);
    free(range);
    return 0;
}
