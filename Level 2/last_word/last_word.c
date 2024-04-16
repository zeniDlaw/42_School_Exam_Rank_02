#include <unistd.h>

int ft_strlen(char *str)
{
    int len = 0;
    while( str[len] != '\0')
        len++;
    return(len);
}

int main(int argc, char **argv)
{
    int size = 0;

    if (argc == 2)
    {
        size = ft_strlen(argv[1]) - 1;
        while(argv[1][size] == '\n' || argv[1][size] == '\t' || argv[1][size] == ' ')
            size--;
        while (size > 0 && argv[1][size - 1] != '\n' && argv[1][size - 1] != '\t' && argv[1][size - 1] != ' ')
            size--;
        while (argv[1][size] != '\0' && argv[1][size] != '\n' && argv[1][size] != '\t' && argv[1][size] != ' ')
        {
            write(1, &argv[1][size], 1);
            size++;
        }
        write(1, "\n", 1);
    }
    else
    {
        write(1, "\n", 1);
    }
    return(0);
}