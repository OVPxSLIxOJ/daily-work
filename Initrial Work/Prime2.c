#include <stdio.h>
#include <math.h>
int Prime(int n)
{
	int i = 0;
	if (n < 2)
		return 0;
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		for (i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				return 0;
			}
			return 1;
		}
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int count = 0;
	int s = 0;
	for (i = 2; i <= n; i++)
	{
		if (Prime(i))
		{
			count++;
			s += i;
		}
	}
	printf("%d %d\n", count, s);
	return 0;
}