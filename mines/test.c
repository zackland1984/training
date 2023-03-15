#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"



void menu()
{

	printf("******************************\n");
	printf("************1.play************\n");
	printf("************0.exit************\n");
	printf("******************************\n");

}
void game()
{
	//存储雷位置
	char mine[ROWS][COLS] = { 0 };

	//存储排查情况的数组
	char show[ROWS][COLS] = { 0 };
	//初始化
	intiboard(mine, ROWS, COLS,'0');
	intiboard(show, ROWS, COLS,'*');
	////打印board
	//displayboard(mine, ROW, COL);
	displayboard(show, ROW, COL);

	set_mines(mine, ROW, COL);
	displayboard(mine, ROW, COL);
	check_mine(mine, show, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("请输入：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("输入错误请重新输入:>\n");
			break;
		}

	} while (input);

	return 0;

}