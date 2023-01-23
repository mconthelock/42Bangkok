#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char *c = "@A Testor";
	
	int n = ft_str_is_alpha(c);
	printf("%d\n", n);
	return (0);
}
