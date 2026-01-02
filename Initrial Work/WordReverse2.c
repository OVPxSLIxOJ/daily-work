#include <stdio.h>
int main()
{
	char s[10000] = { 0 };
	int len = 0;
	while ((s[len] = getchar()) != '\n' && s[len] != EOF)
	{
		len++;
	}
	s[len] = '\0';
	int i = len - 1;
	while (s[i] == ' ' || s[i] == '\t')
	{
		s[i] = '\0';
		i--;
	}
	int first = 1;
	while (i >= 0)
	{
		int end = i;
		while (i >= 0 && s[i] != ' ' && s[i] != '\t')
		{
			i--;
		}
		int start = i + 1;
		if (!first)
		{
			printf(" ");
		}
		for (int j = start; j <= end; j++)
		{
			printf("%c", s[j]);
		}
		first = 0;
		while (i >= 0 && s[i] == ' ' || s[i] == '\t')
		{
			i--;
		}
	}
	putchar('\n');
	return 0;
}