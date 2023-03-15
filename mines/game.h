#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MINES 10

#define ROW 9
#define COL 9
//11*11 便于读取排雷信息
#define ROWS ROW+2
#define COLS COL+2
//初始化
void intiboard(char board[ROWS][COLS],int row,int col, char set);
//打印棋盘
void displayboard(char board[ROWS][COLS],int row, int col);
//布雷
void set_mines(char board[ROWS][COLS], int row, int col);
//查雷 查到雷就结束游戏 不是雷就将周边雷个数记录进show数组
void check_mine(char board[ROWS][COLS], char show[ROWS][COLS],int row, int col);