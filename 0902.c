#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//				count++;
//			}
//
//		}
//
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}//打印1000-2000之间的闰年，共243个

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}//打印1000-2000之间的闰年，共243个

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n共%d个\n", count);
//	return 0;
//}//求出100-200之间的质数，共21个

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int h = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				h = 0;
//				break;
//			}
//		}
//		if (h == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n共%d个\n", count);
//	return 0;
//}//求出100-200之间的质数，共21个

//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int h = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				h = 0;
//				break;
//			}
//		}
//		if (h == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n共%d个\n", count);
//	return 0;
//}//求出100-200之间的质数，共21个

//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//
//again:
//	printf("电脑在1分钟内关机，输入abc取消关机");
//	scanf("%s", input);
//	if (strcmp(input, "abc") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//#include<string.h>
//
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = get_max(a, b);
//	printf("\n%d更大\n", max);
//	return 0;
//}//输入两个数，选出谁更大

////函数返回类型的地方写出：void，表示这个函数不返回任何值，也不需要返回
//void Swap(int* pa,int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("交换前:");
//	scanf("%d%d", &a,&b);
//	Swap(&a, &b);
//	printf("交换后:%d %d\n", a, b);
//
//	return 0;
//}//输入两个数，交换位置


