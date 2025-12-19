#include <stdio.h>
#include <ctype.h>
int main()
{
	char c;
	int l = 0;
	int s = 0;
	int d = 0;
	int o = 0;
	while ((c = getchar()) != '\n')
	{
		if (isalpha(c))
		{
			l++;
		}
		else if (isdigit(c))
		{
			d++;
		}
		else if (isspace(c))
		{
			s++;
		}
		else
		{
			o++;
		}
	}
	printf("英文字母=%d 空格=%d 数字字符=%d 其它字符=%d\n",l,s,d,o);
	return 0;
}
