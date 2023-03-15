#pragma once
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

//符号定义
#define ROW 3
#define COL 3
//函数申明
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL], int row,int col);
void playmove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);