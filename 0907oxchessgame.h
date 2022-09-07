#pragma once
//头文件的包含
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
//符号的定义
#define ROW 3
#define COL 3
//函数的声明
void InitBoard(char board[ROW][COL], int row, int col);//初始化棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);//打印棋盘的函数
void PlayerMove(char board[ROW][COL],int row,int col);//玩家下棋
void ComputerMove(char board[ROW][COL],int row,int col);//电脑下棋
//1.玩家赢了 - o
//2.电脑赢了 - x
//3.平局     - Q
//4.游戏继续 - C
char IsWin(char board[ROW][COL], int row, int col);//判断游戏是否有输赢
int IsFull(char board[ROW][COL], int row, int col);//如果棋盘满了返回1，不满返回0