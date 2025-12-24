#include <stdio.h>
struct Stu
{
	int id;
	char name[20];
	float score;
};
int main()
{
	struct Stu s[5]=
	{
		{1001,"Alice",85.5},
		{1002,"Bob",90.0},
		{1003,"Charlie",78.5},
		{1004,"David",92.0},
		{1005,"Eve",88.5}
	};
	int i;
	float max = 0;
	for (i = 1; i < 5; i++)
	{
		if (s[i].score > max)
		{
			max = s[i].score;
		}
	}
	printf("The highest score is: %.2f\n", max);
	return 0;
}