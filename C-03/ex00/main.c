#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1;
	char	*s2;
	int	cmp1;
	int	cmp2;
	
	s1 = "RBCD";
	s2 = "ADCD";
	cmp1 = strcmp(s1, s2);
	printf("Compare By STMCMP : %d\n", cmp1);
	cmp2 = ft_strcmp(s1, s2);
	printf("Compare By FT_STRCMP : %d\n", cmp2);
	return (0);
}
