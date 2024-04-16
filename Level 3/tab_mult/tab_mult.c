#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
    long nb = 0;
    nb = n;

    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putchar((nb %10) + '0');
    }
    else
        ft_putchar(nb + '0');
}

int ft_atoi(char *str)
{
    int num = 0;
    int sign = 1;

    while(*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        num = num * 10 + *str - '0';
        str++;
    }
    return(sign * num);
}

int main(int argc, char **argv)
{
    int i = 0;
    int num = 0;
    int mul = 0;

    if(argc == 2)
    {
        num = ft_atoi(argv[1]);
        while(i <= 9)
        {
            ft_putnbr(i);
            ft_putchar(' ');
            ft_putchar('x');
            ft_putchar(' ');
            ft_putnbr(num);
            ft_putchar(' ');
            ft_putchar('=');
            ft_putchar(' ');
            mul = mul + (i * num);
            ft_putnbr(mul);
            ft_putchar('\n');
            mul = 0;
            i++;
        }

    }
    else
        ft_putchar('\n');
    return(0);
}