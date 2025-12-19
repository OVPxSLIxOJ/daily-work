#include <stdio.h>
int febonacci(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	return febonacci(n - 1) + febonacci(n - 2);
}
int main()
{
	int x = 0;
	scanf("%d", &x);
	printf("%d\n", febonacci(x));
	return 0;
}