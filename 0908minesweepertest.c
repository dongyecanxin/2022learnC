#define _CRT_SECURE_NO_WARNINGS 1
#include"0908minesweepergame.h"

void menu()//�˵�
{
	printf(" --------------------------------- \n");
	printf("|            ����1ɨ��            |\n");
	printf("|            ����0�˳�            |\n");
	printf(" --------------------------------- \n");
}

extern int tot;
extern int win;
extern int los;

void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ
	InitBoard(mine, ROWS, COLS, '0');//��ʼ������'0'
	InitBoard(show, ROWS, COLS, '*');//��ʼ������'*'
	DisplayBoard(show, ROW, COL);//��ӡ����Ų�����׵���Ϣ������
	SetMine(mine, ROW, COL);//������
	//DisplayBoard(mine, ROW, COL);//��ӡ��Ų��úõ��׵���Ϣ������
	FindMine(mine, show, ROW, COL);//�Ų���
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		printf("������,����%d�Σ��ɹ�%d�Σ�ʧ��%d��\n",tot,win,los);
		printf("��ѡ��:");
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