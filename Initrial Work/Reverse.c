void reverse(char str[])
{
	int start = 0;
	int end = 0;
	char temp;
	// Find the length of the string
	while (str[end] != '\0') {
		end++;
	}
	end--; // Set to last character index
	// Swap characters from start and end until they meet in the middle
	while (start < end) {
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
#include <stdio.h>
int main()
{
	char str[] = "Hello, World!";
	reverse(str);
	printf("%s\n", str); // Output should be: !dlroW ,olleH
	return 0;
}