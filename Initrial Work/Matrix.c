#include <stdio.h>
int main()
{
	int a[3][3] = { 0 };
	int b[3][3] = { 0 };
	printf("please input data for array a :\n");
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("please input data for array b :\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	int c[3][3] = { 0 };
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("output of the sum of array :\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = 0;
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
	    }
	}
	printf("output of the product of the array :\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 3; j++)
		{
			int temp = a[j][i];
			a[j][i] = a[i][j];
			a[i][j] = temp;
		}
	}
	printf("output of the transpose of array a :\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}