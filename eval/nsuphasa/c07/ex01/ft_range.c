/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:38:35 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/29 21:40:56 by csewanam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	size = max - min;
	range = malloc(sizeof(int) * (size));
	if (min >= max)
		return (NULL);
	if (!range)
		return (NULL);
	i = -1;
	while (++i < size)
		range[i] = min + i;
	return (range);
}

int	main(void)
{
	int min = 0;
	int max = 7;
	int	*range = ft_range(min, max);
	printf("RANGE: ");
	int i;
	for (i = 0; i < max - min; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");
	printf("SIZE: %d\n", i);
    free(range);
    return (0);
}
