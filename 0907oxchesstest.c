#define _CRT_SECURE_NO_WARNINGS 1
#include"0907oxchessgame.h"

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
		printf("本场中，玩家赢了%d次，电脑赢了%d次，平局%d次\n",a,b,c);
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
	}while(input);
	return 0;
}