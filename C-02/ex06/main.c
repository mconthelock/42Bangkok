#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char *c = "AZXC.R";
	
	int n = ft_str_is_printable(c);
	printf("%d\n", n);
	return (0);
}
