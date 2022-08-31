#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar() )!= EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}//ctrl+z getchar就读取结束

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	printf("请确认(Y/N):");
//	//清理缓冲区
//	//getchar();//处理'\n'
//	//
//	//清理缓冲区中的多个代码
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n');
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 2;//初始化
//	while (i <= 20)//判断部分
//	{
//		printf("%d ", i);
//		i+=2;//调整部分
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do {
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do {
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do {
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	} while (i < 10);
//	return 0;
//}

//int main()
//{
//	int num2 = 0;
//	int num = 0;
//	int ans = 0;
//	scanf_s("%d", &num);
//	if (num != 0)
//	{
//		ans = num;
//		num2 = num - 1;
//		if (num>1)
//		{
//			do {
//				ans = ans * num2;
//				num2--;
//			} while (num2 > 1);
//			printf("%d\n", ans);
//		}
//		else
//			printf("%d\n", ans);
//	}
//	else
//		printf("1");
//	return 0;
//}//输入一个数字，求出阶乘
 
//int main()
//{
//	int num = 2;
//	int num2 = 0;
//	int num3 = 0;
//	int ANS = 1;
//		while (num < 11)
//		{
//			num3 = num;
//			num2 = num - 1;
//				do
//				{
//					num3 = num3 * num2;
//					num2--;
//				} while (num2 > 1);
//			ANS = ANS + num3;	
//			num++;
//		}
//	printf("%d\n", ANS);
//	return 0;    
//}//求1!+...+10!，答案是4037913
 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	scanf("%d", &b);
//		for (a = 1; a <= b; a++)
//		{
//			c *= a;
//		}
//	printf("%d\n", c);
//	return 0;
//}//输入一个数字，求出阶乘

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int d = 0;
//		for (b = 1; b <= 10; b++)
//		{
//			c = 1;//计算n的阶乘之前，将c初始化为1
//				for(a=1;a<=b;a++)
//				{
//					c *= a;
//				}
//			d += c;
//		}
//	printf("%d\n", d);
//	return 0;
//}//求1!+...+10!，答案是4037913
	
//int main()
//{
//	int b = 0;
//	int c = 1;
//	int d = 0;
//		for (b = 1; b <= 10; b++)
//		{
//			c *= b;
//			d += c;
//		}
//	printf("%d\n", d);
//	return 0;
//}//更简便地求1!+...+10!，答案是4037913


