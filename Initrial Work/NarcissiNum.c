#include <stdio.h>

// 建议1：简化return语句
int SXH(int n)
{
    int a = n % 10;         // 个位
    int b = (n / 10) % 10;  // 十位
    int c = n / 100;        // 百位
    
    // 直接返回比较结果（0或1）
    return (a*a*a + b*b*b + c*c*c) == n;
}
int main()
{
    for (int i = 100; i < 1000; i++)
    {
        if (SXH(i))
            printf("%d ", i);
    }
    return 0;
}