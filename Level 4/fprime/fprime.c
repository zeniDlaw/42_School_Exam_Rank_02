#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int num = 0;
    int i = 1;

    if (argc == 2)
    {
        i = 1;
        num = atoi(argv[1]);
        if (num == 1)
            printf("1");
        while (num >= ++i)
        {
            if (num % i == 0)
            {
                printf("%d",i);
                if (num == i)
                    break;
                printf("*");
                num /= i;
                i = 1;
            }
        }
    }
    printf("\n");
    return(0);
}