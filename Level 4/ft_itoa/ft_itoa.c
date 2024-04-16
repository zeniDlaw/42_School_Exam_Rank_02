#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nbr)
{
    if(nbr == -2147483648)
        return("-2147483648\n");
    int n = nbr;
    int len = 0;
    if (nbr <= 0)
    {
        len++;
    }
    while (n)
    {
        n /= 10;
        len++;
    }
    char *result;
    result = malloc(sizeof(char)*(len + 1));
    if (result == NULL)
        return(NULL);
    result[len] = '\0';
    if (nbr == 0)
    {
        result[0] = '0';
        return(result);
    }
    if (nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }
    while (nbr)
    {
        result[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return result;

}

int main(void)
{
    char *res;
    res = ft_itoa(-2147483648);
    printf("%s\n", res);
    return(0);
}
