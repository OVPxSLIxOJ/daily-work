#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
int main()
{
	int random = 0;
	int guess = 0;
	int count = 0;

	srand((unsigned int)time(NULL));
	random = rand() % 100 + 1;
	do
	{
		printf("please enter a number:");
		scanf("%d", &guess);
		if (guess > random)
		{
			printf("too big\n");
		}
		else if (guess < random)
		{
			printf("too small\n");
		}
		else
		{
			printf("bingo!!! you got it in %d times\n", count + 1);
		}
		count++;
	} while (guess != random);
	return 0;
}