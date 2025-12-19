#include <stdio.h>
bubble(int D[], int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (D[j] > D[j + 1])
			{
				int temp = D[j + 1];
				D[j + 1] = D[j];
				D[j] = temp;
			}
		}
	}
}
int main()
{
	int D[5] = { 0 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &D[i]);
	}
	bubble(D, 5);
	for (i = 0; i < 5; i++)
	{
		printf("%d ", D[i]);
	}
	return 0;
}