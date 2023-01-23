#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char *c = "AZXC.R";
	
	int n = ft_str_is_uppercase(c);
	printf("%d\n", n);
	return (0);
}
