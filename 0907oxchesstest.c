#define _CRT_SECURE_NO_WARNINGS 1
#include"0907oxchessgame.h"

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
		printf("�����У����Ӯ��%d�Σ�����Ӯ��%d�Σ�ƽ��%d��\n",a,b,c);
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
	}while(input);
	return 0;
}