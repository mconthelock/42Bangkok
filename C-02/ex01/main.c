#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char src[] = "Source";
	char des[25];

	ft_strncpy(des, src, 3);
	printf("%s\n", des);
	return (0);
}
