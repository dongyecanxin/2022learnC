#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define EASY_COUNT 10
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
void InitBoard(char board[ROWS][COLS],int rows, int cols,char set);//��ʼ������
void DisplayBoard(char board[ROWS][COLS], int row, int col);//��ӡ����
void SetMine(char mine[ROWS][COLS], int row, int col);//������
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//�Ų���
int get_mine_count(char mine[ROWS][COLS], int x, int y);//ͳ��(x,y)��Χ�м�����