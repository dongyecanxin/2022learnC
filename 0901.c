#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr这个有序数组中查找k(7)的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
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
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf_s("%d", &k);//要查找的数字
//	//在arr这个有序数组中查找输入的值的下标
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
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
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
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
//		system("cls");//清空屏幕
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠1秒
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
//		printf("请输入密码:");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次输入密码均错误，退出程序\n");
//	}
//	return 0;
//}

//void menu()//菜单
//{
//	printf(" --------------------------------- \n");
//	printf("|            输入1猜数            |\n");
//	printf("|            输入0退出            |\n");
//	printf(" --------------------------------- \n");
//}
//
//#include<stdlib.h>
//#include<time.h>
//
//int score = 0;//猜对的次数
//
//void game()//猜数字游戏
//{
//	//rand函数返回了一个0-32767之间的数字
//	int num = rand()%100+1;//%100的余数是0-99，+1后范围为1-100
//	int guess = 0;
//	while (1)
//	{
//		printf("\n猜数:");
//		scanf("%d", &guess);
//		if (guess < num)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > num)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
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
//	srand((unsigned int)time(NULL));//时间-时间戳
//	do
//	{
//		menu();//打印菜单
//		printf("本场已猜对%d次\n", score);
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("在1-100之间猜数\n");
//			game();
//			Sleep(1500);
//			system("cls");
//			break;
//		case 0:
//			printf("\n感谢游玩，正在退出...\n");
//			Sleep(1500);
//			system("cls");
//			break;
//		default:
//			printf("\n选择错误，重新选择\n");
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
//			printf("最大公约数为:%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}//输入两个数，求最大公约数

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
//	printf("最大公约数为:%d\n", n);
// 
// 最小公倍数= m * n / 最大公约数
// 
//	return 0;
//}



