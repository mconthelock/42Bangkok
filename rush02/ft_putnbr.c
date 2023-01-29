#include <unistd.h>

int	ft_putarray(char *num,char *nb)
{
    int i;

    i = 0;
    while (nb[i] != '\0')
    {
        if(nb[i] >= '0' && nb[i] <= '9')
        {
            n[i] = nb[i] - '0';
        }
        else
        {
            write(1, "Error\n", 10);
            n[0] = '\0';
        }
        i++;
    }
    num = n;
    return (num);
}