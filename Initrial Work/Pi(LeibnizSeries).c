#include <stdio.h>
int main()
{
	double p = 0;
	double x = 0;
	int i = 1;
	int sign = 1;
	while (1.0 / i * 4 > 1e-8)
	{
		x += sign * (1.0 / i);
		i += 2;
		sign = -sign;
	}
	p = 4.0 * x;
	printf("PI = %7.5lf\n", p);
	return 0;
}