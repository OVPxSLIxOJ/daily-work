#include <stdio.h>
int main(void)
{
    int i, j;
    int count = 0;
    for (i = 100; i <= 200; i++) 
    {
        for (j = 2; j * j <= i; j++) 
        {
            if (i % j == 0)
                goto NOT_PRIME;
        }
        printf("%4d", i);
        count++;
        if (count % 10 == 0)
            printf("\n");
    NOT_PRIME:
        ;
    }
    return 0;
}