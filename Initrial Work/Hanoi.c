#include <stdio.h>
void hanoi(int n, char from, char to, char itme)
{
	if (n == 1)
	{
		printf("move plate %d from %c to %c\n", n, from, to);
		return;
	}
	hanoi(n - 1, from, itme, to);
	printf("move plate %d from %c to %c", n, from, to);
	hanoi(n - 1, itme, to, from);
}
int main()
{
	int n = 0;
	printf("please enter the number of disks for the tower of hanoi : ");
	scanf("%d", &n);
	hanoi(n, 'C', 'X', 'K');
	return 0;
}