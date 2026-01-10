#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
menu()
{
	printf("************************************\n");
	printf("********   1.play  0.exit   ********\n");
	printf("************************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//判断输赢
	}
	if (ret == '*')
	{
		printf("Player win!\n");
	}
	else if (ret == '#')
	{
		printf("Computer win!\n");
	}
	else
	{
		printf("Draw\n");
	}
}
int main()
{
	srand((unsigned int)time(NULL));//设置随机数的生成起点
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("please select:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("Three-Piece Chess\n");
			game();
			break;
		case 0:
			printf("Exit\n");
			break;
		default:
			printf("Error\n");
			break;
		}
	} while (input);
	return 0;
}