#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 10;
	int b = 3;
	int *div = &a;
	int *mod = &b;

	printf("Before: Div => %d, Mod %d\n", a, b);
	ft_div_mod(a, b, div, mod);
	printf("After: Div => %d, Mod %d\n", a, b);
	return (0);
}
