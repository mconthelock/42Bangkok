#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char c[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(c);

	printf("%s\n", c);
	return (0);
}
