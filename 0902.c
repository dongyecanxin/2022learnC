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
//}//��ӡ1000-2000֮������꣬��243��

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
//}//��ӡ1000-2000֮������꣬��243��

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
//	printf("\n��%d��\n", count);
//	return 0;
//}//���100-200֮�����������21��

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
//	printf("\n��%d��\n", count);
//	return 0;
//}//���100-200֮�����������21��

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
//	printf("\n��%d��\n", count);
//	return 0;
//}//���100-200֮�����������21��

//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//
//again:
//	printf("������1�����ڹػ�������abcȡ���ػ�");
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
//	printf("\n%d����\n", max);
//	return 0;
//}//������������ѡ��˭����

////�����������͵ĵط�д����void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
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
//	printf("����ǰ:");
//	scanf("%d%d", &a,&b);
//	Swap(&a, &b);
//	printf("������:%d %d\n", a, b);
//
//	return 0;
//}//����������������λ��


