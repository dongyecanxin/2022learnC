#define _CRT_SECURE_NO_WARNINGS 1
//ͷ�ļ��İ���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
//���ŵĶ���
#define ROW 3
#define COL 3

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
}//��ʼ�����̵ĺ���

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
	printf("���������1��3�������1��3\n");
	printf("�����������꣬�ո�������������\n");
}//��ӡ���̵ĺ���

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("���������������:");
		scanf("%d %d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����
			//�ж������Ƿ�ռ��
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'o';
				break;
			}
			else
			{
				printf("\n���걻ռ�ã�����������\n");
			}
		}
		else
		{
			printf("\n����Ƿ�������������\n");
		}
	}
}//�������

void ComputerMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		//�ж�ռ��
		if (board[x][y] == ' ')
		{
			board[x][y] = 'x';
			break;
		}
	}
}//��������

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//����û��
		}
	}
	return 1;//��������
}//����������˷���1����������0

//1.���Ӯ�� - o
//2.����Ӯ�� - x
//3.ƽ��     - Q
//4.��Ϸ���� - C

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�ж�����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//�ж�����
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�ж�ƽ��
	int ret = IsFull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	//����
	return 'C';
}//�ж���Ϸ�Ƿ�����Ӯ

void menu()//�˵�
{
	printf(" --------------------------------- \n");
	printf("|          ����1��������          |\n");
	printf("|          ����0�˳���Ϸ          |\n");
	printf(" --------------------------------- \n");
}

int a = 0;
int b = 0;
int c = 0;

void game()
{
	char board[ROW][COL];//��������-��ά����
	InitBoard(board, ROW, COL);//��ʼ������ - ��ʼ���ո�
	DisplayBoard(board, ROW, COL);//��ӡ���� - �����Ǵ�ӡ���������
	char ret = 0;//������Ϸ״̬
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		system("cls");
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		system("cls");
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == 'o')
	{
		printf("\n���Ӯ��\n");
		a++;
	}
	else if (ret == 'x')
	{
		printf("\n����Ӯ��\n");
		b++;
	}
	else
	{
		printf("\nƽ��\n");
		c++;
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		printf("�����У����Ӯ��%d�Σ�����Ӯ��%d�Σ�ƽ��%d��\n", a, b, c);
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Sleep(500);
			system("cls");
			game();
			Sleep(3000);
			system("cls");
			break;
		case 0:
			system("cls");
			printf("\n��л���棬�����˳�...\n");
			Sleep(1500);
			system("cls");
			break;
		default:
			system("cls");
			printf("\nѡ���������ѡ��\n");
			Sleep(1000);
			system("cls");
			break;
		}
	} while (input);
	return 0;
}
