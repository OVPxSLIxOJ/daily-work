#include <stdio.h>
#include <ctype.h>
#include <string.h>
int isPalindrome(char a[])
{
	int l = 0;
	int r = strlen(a) - 1;
	while (l < r)
	{
		while (l < r && !isalnum(a[l]))
		{
			l++;
		}
		while (l < r && !isalnum(a[r]))
		{
			r--;
		}
		if (tolower(a[l]) != tolower(a[r]))
		{
			return 0;
		}
		l++;
		r--;
	}
	return 1;

}
int main()
{
	char a[1000] = { 0 };
	printf("Enter a string and I will determine whether it is a palindrome string :\n");
	fgets(a, sizeof(a), stdin);
	if (isPalindrome(a))
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}