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
        printf("%d是素数\n", a);
    }
    else
    {
        printf("%d不是素数\n", a);
    }

    return 0;
}