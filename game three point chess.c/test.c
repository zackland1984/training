#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu(void)
{
	printf("*********************\n");
	printf("*******1.play********\n");
	printf("*******0.exit********\n");
	printf("*********************\n");
}
void game()
{
// �洢����
	char board[ROW][COL];
	//��ʼ������-������ſո�
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	char ret = 0;

	while (1) 
	{
		//player ��
		playmove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//computer ��
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);



	return 0;

}