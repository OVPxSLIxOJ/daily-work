#include <stdio.h>
void add_one(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		*(arr + i) += 1;
	}
}
int main()
{
	int a[] = { 1, 2, 3 ,4 ,5 };
	int n = sizeof(a) / sizeof(a[0]);
	add_one(a, n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}