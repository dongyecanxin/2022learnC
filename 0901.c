#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr������������в���k(7)��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf_s("%d", &k);//Ҫ���ҵ�����
//	//��arr������������в��������ֵ���±�
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}
 
//#include<string.h>
//#include<windows.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		system("cls");//�����Ļ
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��1��
//		left++;
//		right--;
//	}
//	return 0;
//}

//#include<string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("���������������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������������˳�����\n");
//	}
//	return 0;
//}

//void menu()//�˵�
//{
//	printf(" --------------------------------- \n");
//	printf("|            ����1����            |\n");
//	printf("|            ����0�˳�            |\n");
//	printf(" --------------------------------- \n");
//}
//
//#include<stdlib.h>
//#include<time.h>
//
//int score = 0;//�¶ԵĴ���
//
//void game()//��������Ϸ
//{
//	//rand����������һ��0-32767֮�������
//	int num = rand()%100+1;//%100��������0-99��+1��ΧΪ1-100
//	int guess = 0;
//	while (1)
//	{
//		printf("\n����:");
//		scanf("%d", &guess);
//		if (guess < num)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > num)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			score++;
//			break;
//		}
//	}
//}
//
//#include<windows.h>
//#include<string.h>
//
//int main()
//{
//	int input = 0;
//	
//	srand((unsigned int)time(NULL));//ʱ��-ʱ���
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("�����Ѳ¶�%d��\n", score);
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��1-100֮�����\n");
//			game();
//			Sleep(1500);
//			system("cls");
//			break;
//		case 0:
//			printf("\n��л���棬�����˳�...\n");
//			Sleep(1500);
//			system("cls");
//			break;
//		default:
//			printf("\nѡ���������ѡ��\n");
//			Sleep(1000);
//			system("cls");
//			break;
//		}
//	}while(input);
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int max = 0;
//	scanf("%d%d", &m, &n);
//	if (m > n)
//		max = n;
//	else
//		max = m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ��Ϊ:%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}//�����������������Լ��

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	scanf("%d%d", &m, &n);
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ��Ϊ:%d\n", n);
// 
// ��С������= m * n / ���Լ��
// 
//	return 0;
//}



