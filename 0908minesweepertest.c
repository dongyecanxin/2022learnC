#define _CRT_SECURE_NO_WARNINGS 1
#include"0908minesweepergame.h"

void menu()//菜单
{
	printf(" --------------------------------- \n");
	printf("|            输入1扫雷            |\n");
	printf("|            输入0退出            |\n");
	printf(" --------------------------------- \n");
}

extern int tot;
extern int win;
extern int los;

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
	InitBoard(mine, ROWS, COLS, '0');//初始化棋盘'0'
	InitBoard(show, ROWS, COLS, '*');//初始化棋盘'*'
	DisplayBoard(show, ROW, COL);//打印存放排查出的雷的信息的棋盘
	SetMine(mine, ROW, COL);//布置雷
	//DisplayBoard(mine, ROW, COL);//打印存放布置好的雷的信息的棋盘
	FindMine(mine, show, ROW, COL);//排查雷
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//打印菜单
		printf("本场中,玩了%d次，成功%d次，失败%d次\n",tot,win,los);
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Sleep(500);
			system("cls");
			game();
			Sleep(2500);
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