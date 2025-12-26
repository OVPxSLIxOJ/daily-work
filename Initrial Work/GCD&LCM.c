#include <stdio.h>
int GCD(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		GCD(b, a % b);
	}
}
int main()
{
	int m, M;
	int a, b;
	scanf("%d %d", &a, &b);
	M = GCD(a, b);
	m = a * b / M;
	printf("GCD=%d\nLCM=%d\n", M, m);
	return 0;
}