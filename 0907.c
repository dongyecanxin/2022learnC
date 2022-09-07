#define _CRT_SECURE_NO_WARNINGS 1
//头文件的包含
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
//符号的定义
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
}//初始化棋盘的函数

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
	printf("棋盘纵向从1到3，横向从1到3\n");
	printf("先输入纵坐标，空格后再输入横坐标\n");
}//打印棋盘的函数

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入下棋的坐标:");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//下棋
			//判断坐标是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'o';
				break;
			}
			else
			{
				printf("\n坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("\n坐标非法，请重新输入\n");
		}
	}
}//玩家下棋

void ComputerMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		//判断占用
		if (board[x][y] == ' ')
		{
			board[x][y] = 'x';
			break;
		}
	}
}//电脑下棋

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//棋盘没满
		}
	}
	return 1;//棋盘满了
}//如果棋盘满了返回1，不满返回0

//1.玩家赢了 - o
//2.电脑赢了 - x
//3.平局     - Q
//4.游戏继续 - C

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断平局
	int ret = IsFull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	//继续
	return 'C';
}//判断游戏是否有输赢

void menu()//菜单
{
	printf(" --------------------------------- \n");
	printf("|          输入1玩三子棋          |\n");
	printf("|          输入0退出游戏          |\n");
	printf(" --------------------------------- \n");
}

int a = 0;
int b = 0;
int c = 0;

void game()
{
	char board[ROW][COL];//储存数据-二维数组
	InitBoard(board, ROW, COL);//初始化棋盘 - 初始化空格
	DisplayBoard(board, ROW, COL);//打印键盘 - 本质是打印数组的内容
	char ret = 0;//接收游戏状态
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		system("cls");
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢得游戏
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		system("cls");
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢得游戏
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == 'o')
	{
		printf("\n玩家赢了\n");
		a++;
	}
	else if (ret == 'x')
	{
		printf("\n电脑赢了\n");
		b++;
	}
	else
	{
		printf("\n平局\n");
		c++;
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//打印菜单
		printf("本场中，玩家赢了%d次，电脑赢了%d次，平局%d次\n", a, b, c);
		printf("请选择:");
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
			printf("\n感谢游玩，正在退出...\n");
			Sleep(1500);
			system("cls");
			break;
		default:
			system("cls");
			printf("\n选择错误，重新选择\n");
			Sleep(1000);
			system("cls");
			break;
		}
	} while (input);
	return 0;
}
