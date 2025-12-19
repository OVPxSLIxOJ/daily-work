#include <stdio.h>
struct Stu
{
	int id;
	char name[20];
	float score[3];
};
int main()
{
	struct Stu s1 = { 2025001615,"Joke",{101,134,130} };
	struct Stu s2 = { 2025001616,"Tom",{90,85,88} };
	struct Stu s3 = { 2025001617,"Alice",{95,92,96} };
	int average1, average2, average3;
	average1 = (s1.score[0] + s1.score[1] + s1.score[2]) / 3;
	average2 = (s2.score[0] + s2.score[1] + s2.score[2]) / 3;
	average3 = (s3.score[0] + s3.score[1] + s3.score[2]) / 3;
	if(average1 >= average2 && average1 >= average3)
	{
		printf("Highest Average Score Student: \nName : %s, Id : %d, Score: 语文%.1f 数学%.1f 英语%.1f\n", s1.name, s1.id, s1.score[0], s1.score[1], s1.score[2]);
	}
	else if(average2 >= average1 && average2 >= average3)
	{
		printf("Highest Average Score Student: \nName : %s, Id : %d, Score: 语文%.1f 数学%.1f 英语%.1f\n", s2.name, s2.id, s2.score[0], s2.score[1], s2.score[2]);
	}
	else
	{
		printf("Highest Average Score Student: \nName : %s, Id : %d, Score: 语文%.1f 数学%.1f 英语%.1f\n", s1.name, s2.id, s2.score[0], s2.score[1], s2.score[2]);
	}
	return 0;
}