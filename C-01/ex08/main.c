#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	n[] = {9, 4, 8, 11, 9, 6, 3};
	int *tab;
	int i;
	
	tab = n;
	ft_sort_int_tab(tab, 7);
	for(i = 0; i < 7; i++)
	{
		printf("%d, ", tab[i]);
	}
	return 1;
}
