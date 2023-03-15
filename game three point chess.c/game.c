#define _CRT_SECURE_NO_WARNINGS

#include"game.h"


void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{

			board[i][j] = ' ';
		}
	}

}
void DisplayBoard(char board[ROW][COL],int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}




		printf("\n");

	}

}

void playmove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = 0, y = 0;
		printf("请输入坐标:>\n");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y>0 && y <= col)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("棋子被占用，请重新输入\n");

			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}


	

}

void Computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:>\n");
	while (1) 
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}

	}
}


char IsWin(char board[ROW][COL], int row, int col)
{
	char ret = 0;
	int count = 0;
	int x = 0;
	int y = 0;
	int i = 0;
	//判断行成立
	for (x = 0; x < row; x++)
	{
		count = 0;
		ret = board[x][0];
		for (y = 0; y < col; y++)
		{
			if (board[x][y] == ret && board[x][y] != ' ')
			{
				count++;
			}

		}
		if (count == col)
		{
			return board[x][0];
		}
	}
	//判断列成立
	for (y = 0; y < col; y++)
	{

		count = 0;
		ret = board[0][y];
		for (x = 0; x < row; x++)
		{
			if (board[x][y] == ret && board[x][y] != ' ')
			{
				count++;

			}

		}
		if (count == row)
		{
			return board[0][y];
		}
	}
	//判断对角线
	count = 0;
	ret = board[0][0];
	for (i = 0; i < row; i++)
	{
		if (board[i][i] == ret && board[i][i] != ' ')
		{
			count++;

		}
		if (count == row)
		{
			return board[0][0];

		}
	
	}
	count = 0;
	ret = board[0][col - 1];
	for (i = 0; i < row; i++)
	{
		if (board[i][col - i - 1] == ret && board[i][col - i - 1] != ' ')
		{
			count++;
		}
		if (count == row)
		{
			return board[0][col - 1];
		}
	}
	//平局
	count = 0;
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
			if (board[x][y] == ' ')
			{
				return 'C';
			}
			else
			{
				count++;
			}
		}
		if (count == row * col)
		{
			return 'Q';//平局
		}
	}


}
