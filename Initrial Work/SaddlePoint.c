#include <stdio.h>
#define M 3
#define N 3
int main()
{
	int a[M][N] = { 0 };
	int i = 0;
	int j = 0;
	int Rowmax = 0;
	int Found = 0;
	int k = 0;
	int c = 0;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	//数组初始化完成
	for (i = 0; i < M; i++)
	{
		Rowmax = 0;//每行最大值初始化，以便下一行使用
		for (j = 0; j < N; j++)
		{
			if (Rowmax < a[i][j])
			{
				Rowmax = a[i][j];
			}
		}//找到该行最大值
		for (j = 0; j < N; j++)
		{
			if (a[i][j] == Rowmax)
			{
				int isColmin = 1;//假设该行最大值是该列最小值
				for (k = 0; k < M; k++)
				{
					if (a[k][j] < a[i][j])
					{
						isColmin = 0;
						break;
					}
				}//判断该行最大值是否为该列最小值
				if (isColmin == 1)
				{
					printf("a[%d][%d]=%d\n", i, j, a[i][j]);//输出鞍点
					Found = 1;//找到鞍点后标记，便于最后判断是否存在鞍点
				}
			}
		}
	}
	if (Found == 0)
	{
		printf("无鞍点\n");
	}
	return 0;
}