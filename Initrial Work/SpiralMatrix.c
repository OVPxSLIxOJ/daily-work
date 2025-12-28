#include <stdio.h>
#define N 5
int main()
{
	int num = 1;
	int top = 0;
	int bottom = N - 1;
	int left = 0;
	int right = N - 1;
	int a[N][N] = { 0 };
	int i, j;
	while (num <= N * N)
	{
		for (j = left; j <= right && num <= N * N; j++)
		{
			a[top][j] = num++;
		}
		top++;
		for (i = top; i <= bottom && num <= N * N; i++)
		{
			a[i][right] = num++;
		}
		right--;
		for (j = right; j >= left && num <= N * N; j--)
		{
			a[bottom][j] = num++;
		}
		bottom--;
		for (i = bottom; i >= top && num <= N * N; i--)
		{
			a[i][left] = num++;
		}
		left++;
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}