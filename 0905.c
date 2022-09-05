#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void print_table(int n)
//{
//	int i = 0;//行
//	for (i = 1; i <= n; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}//打印指定行数的乘法表
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//	printf("%s\n", arr);//fedcba
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	char tmp = *str;//第一步：将a放进tmp
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//第二步：把f挪到最前面a一开始所在的地方
//	*(str + len - 1) = '\0';//第三步：放一个\0在f一开始所在的地方
//	if (my_strlen(str + 1) >= 2)//判断条件，如果剩下1个或0个字符就不用执行了
//	{
//		reverse_string(str + 1);//第四步：逆序中间剩下的bcde
//	}
//	*(str + len - 1) = tmp;//第五步：把a放到尾部f一开始所在的地方
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//	printf("%s\n", arr);//fedcba
//	return 0;
//}

//int digitsum(int n)
//{
//	if (n > 9)
//		return digitsum(n / 10) + n % 10;
//	else
//		return n;
//}//求输入数字的各位数字之和
//
//int main()
//{
//	int num = 0;
//	printf("输入数字，求各位数字之和:\n");
//	scanf("%d", &num);
//	int sum = digitsum(num);
//	printf("%d的各位数字之和为%d\n",num, sum);
//	return 0;
//}

//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / Pow(n, -k);
//}//用递归求n的k次方
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double res = Pow(n, k);
//	printf("%d的%d次方是%lf\n", n,k,res);
//	return 0;
//}

