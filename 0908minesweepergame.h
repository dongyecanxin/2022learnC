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
void InitBoard(char board[ROWS][COLS],int rows, int cols,char set);//初始化棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);//打印棋盘
void SetMine(char mine[ROWS][COLS], int row, int col);//布置雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//排查雷
int get_mine_count(char mine[ROWS][COLS], int x, int y);//统计(x,y)周围有几个雷