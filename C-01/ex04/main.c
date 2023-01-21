#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 11;
	int b = 2;
	int *div = &a;
	int *mod = &b;

	printf("Before: Div => %d, Mod => %d\n", a, b);
	ft_ultimate_div_mod(div, mod);
	printf("After: Div => %d, Mod => %d\n", a, b);
	return (0);
}
