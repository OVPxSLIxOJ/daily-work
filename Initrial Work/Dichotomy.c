#include <stdio.h>
void Ascending(int a[])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int Dichotomy(int b, int a[])
{
	int l = 0;
	int r = 9;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (a[mid] > b)
			r = mid - 1;
		else if (a[mid] < b)
			l = mid + 1;
		else
			return mid + 1;
	}
	return -1;
}
int main()
{
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	Ascending(a);
	for(int i=0;i<10;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	int b = 0;
	scanf("%d", &b);
	printf("found at %d\n", Dichotomy(b, a));
	return 0;
}