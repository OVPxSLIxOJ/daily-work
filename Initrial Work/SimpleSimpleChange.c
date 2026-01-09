#include <stdio.h>
void Change(int* p)
{
	*p = 10;
}
int main()
{
	int x = 1;
	int* p = &x;
	printf("%d\n", x);
	Change(p);
	printf("%d", x);
	return 0;
}