#include <stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int	a = 5;
	int	b = 12;
	int *c = &a;
	int	*d = &b;
	
	printf("Before: %d -> %d\n", a, b);
	ft_swap(c, d);
	printf("After: %d -> %d\n", a, b);
	return (0);
}
