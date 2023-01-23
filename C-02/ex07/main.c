#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char c[] = "chalormsak Sewanam";
	ft_strupcase(c);

	printf("%s\n", c);
	return (0);
}
