#pragma once
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

//���Ŷ���
#define ROW 3
#define COL 3
//��������
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL], int row,int col);
void playmove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);