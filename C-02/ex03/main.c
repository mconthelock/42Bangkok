#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *c = "1 234";
	
	int n = ft_str_is_numeric(c);
	printf("%d\n", n);
	return (0);
}
