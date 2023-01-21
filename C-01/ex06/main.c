#include <stdio.h>

int ft_strlen(char *str);

int	main(void)
{
	int	len;
	char *str = "Example";
	len = ft_strlen(str);
	printf("Len : %d\n", len);
	return (0);
}
