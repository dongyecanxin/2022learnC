#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void print_table(int n)
//{
//	int i = 0;//��
//	for (i = 1; i <= n; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}//��ӡָ�������ĳ˷���
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
//	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
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
//	char tmp = *str;//��һ������a�Ž�tmp
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//�ڶ�������fŲ����ǰ��aһ��ʼ���ڵĵط�
//	*(str + len - 1) = '\0';//����������һ��\0��fһ��ʼ���ڵĵط�
//	if (my_strlen(str + 1) >= 2)//�ж����������ʣ��1����0���ַ��Ͳ���ִ����
//	{
//		reverse_string(str + 1);//���Ĳ��������м�ʣ�µ�bcde
//	}
//	*(str + len - 1) = tmp;//���岽����a�ŵ�β��fһ��ʼ���ڵĵط�
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
//	printf("%s\n", arr);//fedcba
//	return 0;
//}

//int digitsum(int n)
//{
//	if (n > 9)
//		return digitsum(n / 10) + n % 10;
//	else
//		return n;
//}//���������ֵĸ�λ����֮��
//
//int main()
//{
//	int num = 0;
//	printf("�������֣����λ����֮��:\n");
//	scanf("%d", &num);
//	int sum = digitsum(num);
//	printf("%d�ĸ�λ����֮��Ϊ%d\n",num, sum);
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
//}//�õݹ���n��k�η�
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double res = Pow(n, k);
//	printf("%d��%d�η���%lf\n", n,k,res);
//	return 0;
//}

