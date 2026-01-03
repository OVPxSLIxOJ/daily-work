#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		int is = 1;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				is = 0;
				break;
			}
		}
		if (is)
		{
			printf("%d ", i);
			count++;
			if (count != 0 && count % 10 == 0)
			{
				printf("\n");
			}
		}
		}

	return 0;
}