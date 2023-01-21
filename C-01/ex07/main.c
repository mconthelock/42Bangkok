#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	n[] = {1, 2, 3, 4, 5, 6, 7};
	int *tab;
	int i;
	
	tab = n;
	ft_rev_int_tab(tab, 7);
	for(i = 0; i < 7; i++)
	{
		printf("%d, ", tab[i]);
	}
	return 1;
}
