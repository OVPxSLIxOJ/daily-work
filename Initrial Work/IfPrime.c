#include <stdio.h>
#include <math.h>
int main()
{
    int a = 0;
    int i = 2;
    int count = 0;
    scanf("%d", &a);
    while(i < sqrt(a))
    {
        if(a % i == 0)
        {
            count++;
        }
        i++;
    }
    if(count == 0 && a > 1)
    {
        printf("%d is a prime number\n", a);
    }
    else
    {
        printf("%d is not a prime number\n", a);
    }

    return 0;
}