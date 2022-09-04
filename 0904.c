#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void cal(unsigned int n)
//{
//	if (n > 9)
//	{
//		cal(n / 10);
//	}
//	printf("%d ", n % 10);
//}//cal函数打印参数的每一位
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//递归-函数自己调用自己
//	cal(num);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}//模拟实现一个strlen函数
//
//int main()
//{
//	char arr[] = "bit";
//	//['b']['i']['t']['\0']
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//int cal(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * cal(n - 1);
//}//低效地计算阶乘
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = cal(n);
//	printf("%d\n", num);
//	return 0;
//}
	
//int cal(int n)
//{
//	int res = 1;
//	while (n > 1)
//	{
//		res *= n;
//		n -= 1;
//	}
//	return res;
//}//快速高效地计算阶乘
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = cal(n);
//	printf("%d\n", num);
//	return 0;
//}

//int thr = 0;
//
//int Fib(int n)
//{
//	if (n == 3)
//		thr++;//统计第3个斐波那契数被算了几次
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 2) + Fib(n - 1);
//}//低效地计算斐波那契数
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = Fib(n);
//	printf("%d\n", num);
//	printf("第3个斐波那契数被算了%d次\n", thr);
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}//快速高效地计算斐波那契数
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = Fib(n);
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)//不能用else if，不然99只计算一次，就错了
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}//从1到100所有整数中出现多少个数字9

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int sig = 1;//用于改变每个数前的符号
//	for (i = 1; i <= 100; i++)
//	{
//		sum += sig * 1.0 / i;
//		sig = -sig;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}//计算1/1-1/2+1/3-......+1/99-1/100的值

//int main()
//{
//	int arr[10] = { -14,28,43,84,-35,-68,47,-82,94,-130 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("十个整数中，最大的是:%d\n", max);
//	return 0;
//}//求10个整数中的最大值

//int main()
//{
//	int i = 1;//行数
//	for (i=1;i<=9;i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",j ,i ,j * i);//%-2d表示左对齐打印2位，不够的用空格填充
//		}
//		printf("\n");
//	}
//	return 0;
//}//在屏幕上打印9*9乘法口诀表



