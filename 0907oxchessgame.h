#pragma once
//ͷ�ļ��İ���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
//���ŵĶ���
#define ROW 3
#define COL 3
//����������
void InitBoard(char board[ROW][COL], int row, int col);//��ʼ�����̵ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col);//��ӡ���̵ĺ���
void PlayerMove(char board[ROW][COL],int row,int col);//�������
void ComputerMove(char board[ROW][COL],int row,int col);//��������
//1.���Ӯ�� - o
//2.����Ӯ�� - x
//3.ƽ��     - Q
//4.��Ϸ���� - C
char IsWin(char board[ROW][COL], int row, int col);//�ж���Ϸ�Ƿ�����Ӯ
int IsFull(char board[ROW][COL], int row, int col);//����������˷���1����������0