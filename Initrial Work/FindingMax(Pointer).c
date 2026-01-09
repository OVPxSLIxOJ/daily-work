#include <stdio.h>
int* max_addr(int* arr, int n)
{
	int i = 0;
	int* max = arr;
	for (i = 0; i < n; i++)
	{
		if (*max < *(arr + i))
		{
			max = arr + i;
		}
	}
	return max;
}
int main()
{
	int a[] = { 1,55,4,89,63,2 };
	int n = sizeof(a) / sizeof(a[0]);
	int* m = max_addr(a, n);
	printf("%d", *m);
	return 0;
}