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
	//�洢��λ��
	char mine[ROWS][COLS] = { 0 };

	//�洢�Ų����������
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	intiboard(mine, ROWS, COLS,'0');
	intiboard(show, ROWS, COLS,'*');
	////��ӡboard
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
		printf("�����룺>");
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
			printf("�����������������:>\n");
			break;
		}

	} while (input);

	return 0;

}