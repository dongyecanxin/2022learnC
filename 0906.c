#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	//int arr[8];
//	//char ch = 5;
//	//int n = 8;
//	//int arr[8];
//
//	//int a = 10;//初始化
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	//int arr[10] = { 1,2,3,4,5 };//不完全初始化
//	//int arr2[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 1,2,3,4,5 };
//
//	//char ch1[5] = { 'b','i','t' };
//	//char ch2[] = { 'b','i','t' };
//
//	//char ch3[5] = "bit";//b i t \0 0
//	//char ch4[] = "bit";//b i t \0
//
//	char ch5[] = "bit";//该数组有4个元素:b,i,t,\0
//	char ch6[] = { 'b','i','t' };//该数组有3个元素:b,i,t
//
//	printf("%d\n", strlen(ch5));//3
//	printf("%d\n", strlen(ch6));//随机值
//
//	printf("%s\n", ch5);
//	printf("%s\n", ch6);
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//%p是按地址的格式打印，十六进制的打印
//	}
//	return 0;
//	
//	//一维数组在内存中是连续存放的
//	//随着数组下标的增长，地址是由低到高变化的
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//数组名是数组首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}

//int main()
//{
//	//创建
//	//int arr[3][4];
//	//char ch[3][10];
//	//初始化-创建的同时赋值
//	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	//int arr[3][4] = { 1,2,3,4,5,6,7 };//不完全初始化，后面补0
//	//int arr[3][4] = { {1,2},{3,4},{5,6} };
//	//int arr[][4] = { {1,2},{3,4},{5,6} };//行可省略，列不可省略
//	int arr[][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);//二维数组在内存中的储存
//	//	}
//	//}
//
//	return 0;
//	//二维数组在内存中也是连续存放的
//	//一行内部连续，跨行也是连续的
//}

//void bubble_sort(int arr[1],int sz)//形参arr本质是指针
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}//排序为升序，冒泡排序，该方法效率较低
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//	bubble_sort(arr,sz);//数组传参的时候，传递的其实是数组首元素的地址
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);
//	return 0;
//	//数组名是数组首元素的地址
//	//但是有2个例外
//	//sizeof(数组名)，数组名表示整个数组，计算的是整个数组的大小，单位是字节
//	//&数组名，数组名表示整个数组，取出的是整个数组的地址
//}

//void bubble_sort(int arr[1],int sz)//形参arr本质是指针
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}//排序为升序，冒泡排序，该方法效率较高
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//	bubble_sort(arr,sz);//数组传参的时候，传递的其实是数组首元素的地址
//
//	return 0;
//}


