#include <stdio.h>
int main()
{

	int p = 0;
	for (p = 1; p < 1000; p++)
	{
		int s = 0;
		int i = 0;
		for (i = 1; i < p; i++)
		{
			if (p % i == 0)
			{
				s += i;
			}
		}
		if (s == p)
		{
			printf("%d\n", p);
		}
	}
	return 0;
}