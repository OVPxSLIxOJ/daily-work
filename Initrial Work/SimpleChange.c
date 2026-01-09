#include <stdio.h>
void Change(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 10;
	int b = 1;
	printf("%d %d\n", a, b);
	Change(&a, &b);
	printf("%d %d", a, b);
	return 0;
}