#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char src[] ="Source text";
	char dest[5];
	strcpy(dest, src);
	printf("Result is %s\n", dest);
	return (0);
}
