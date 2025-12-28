#include <stdio.h>
int main()
{
	char c;
	int lower = 0;
	int upper = 0;
	int digit = 0;
	int space = 0;
	int other = 0;
	while ((c = getchar()) != '\n')
	{
		if (c <= 'z' && c >= 'a')
			lower++;
		else if (c <= 'Z' && c >= 'A')
			upper++;
		else if (c <= '9' && c >= '0')
			digit++;
		else if (c == ' ')
			space++;
		else
			other++;
	}
	printf("Lowercase: %d\n", lower);
	printf("Uppercase: %d\n", upper);
	printf("Digits: %d\n", digit);
	printf("Whitespace: %d\n", space);
	printf("Other: %d\n", other);
	return 0;
}