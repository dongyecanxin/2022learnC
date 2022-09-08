#define _CRT_SECURE_NO_WARNINGS 1
#include"0908minesweepergame.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}//��ӡ�к�
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("�����ʽ:�� �ո� ��\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//����10����
	while (count)
	{
		int x = rand()%row+1;
		int y = rand()%col+1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}//ͳ��(x,y)��Χ�м�����

int tot = 0;
int win = 0;
int los = 0;

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int WIN = 0;
	while (WIN < row * col - EASY_COUNT)
	{
		system("cls");
		DisplayBoard(show, row, col);//��ʾ�Ų������Ϣ
		printf("������Ҫ�Ų������:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź�������ʧ��\n");
				DisplayBoard(mine, row, col);
				tot++;
				los++;
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';//�����׵�����£�ͳ��(x,y)��Χ�м�����
				WIN++;
			}
		}
		else
		{
			printf("\n���겻�Ϸ�������������\n");
			Sleep(1000);
		}
	}
	if (WIN == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, row, col);
		tot++;
		win++;
	}
}