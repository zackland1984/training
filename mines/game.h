#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MINES 10

#define ROW 9
#define COL 9
//11*11 ���ڶ�ȡ������Ϣ
#define ROWS ROW+2
#define COLS COL+2
//��ʼ��
void intiboard(char board[ROWS][COLS],int row,int col, char set);
//��ӡ����
void displayboard(char board[ROWS][COLS],int row, int col);
//����
void set_mines(char board[ROWS][COLS], int row, int col);
//���� �鵽�׾ͽ�����Ϸ �����׾ͽ��ܱ��׸�����¼��show����
void check_mine(char board[ROWS][COLS], char show[ROWS][COLS],int row, int col);