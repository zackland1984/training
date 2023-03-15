#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void intiboard(char board[ROWS][COLS], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{

			board[i][j] = set;

		}

	}

}

void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------扫雷游戏-----------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for ( j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------扫雷游戏-----------\n");
}

void set_mines(char board[ROWS][COLS], int row, int col)
{
	int count = MINES;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}

	}

}

static mines_count(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y - 1] +
		board[x - 1][y] +
		board[x - 1][y + 1] +
		board[x][y - 1] +
		board[x][y + 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] - 8 * '0';
}
void ExplosionSpread(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y,int count)
{
	count = mines_count(board, x, y);
	if (count == 0)
	{
		show[x][y] = ' ';
		int i = 0;
		int j = 0;
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				if (show[i][j] == '*')
				{
					ExplosionSpread(board, show, row, col, i, j, count);
				}
			}
		}
	}
	else
	{
		show[x][y] = '0' + count;
	}




}
void check_mine(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//win为已经扫过的格子数 代表胜利的进程
	while (win < row * col - MINES)
	{
		printf("输入要扫描的坐标\nx y:>");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x][y] == '1')
			{
				printf("很遗憾，游戏失败\n");
				displayboard(show, row, col);
				break;
			}
			else
			{
				int count = mines_count(board, x, y);
				show[x][y] = count + '0';
				ExplosionSpread(board, show, row, col, x, y, count);
				displayboard(show, row, col);
				win++;
			}

		}
		else
		{
			printf("坐标不合法重新输入\n");

		}
	}
	if (win == row * col - MINES)
	{
		printf("you win!\n");
		displayboard(show, row, col);
	}



}