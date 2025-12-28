#include <stdio.h>
int main()
{
    int a[100] = { 0 };  // 原数组
    int b[100] = { 0 };  // 存放去重后的数组
    int n = 0;         // 原数组元素个数
    int count = 0;     // 去重后元素个数
    int i = 0;
    int j = 0;
    int flag = 0;      // 标记是否重复
    // 输入
    printf("请输入元素个数：");
    scanf("%d", &n);
    printf("请输入%d个整数：", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // 去重
    for (i = 0; i < n; i++)
    {
        flag = 0;  // 假设不重复
        // 检查a[i]是否已经在b数组中存在
        for (j = 0; j < count; j++)
        {
            if (a[i] == b[j])
            {
                flag = 1;  // 发现重复
                break;
            }
        }
        // 如果不重复，加入b数组
        if (flag == 0)
        {
            b[count] = a[i];
            count++;
        }
    }
    // 输出结果
    printf("去重后的数组：");
    for (i = 0; i < count; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n去重后元素个数：%d\n", count);
    return 0;
}