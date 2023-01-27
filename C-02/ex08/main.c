#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char c[] = "S.CHALORMSAK@GMAIL.COM";
	ft_strlowcase(c);

	printf("%s\n", c);
	return (0);
}
