#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void cal(unsigned int n)
//{
//	if (n > 9)
//	{
//		cal(n / 10);
//	}
//	printf("%d ", n % 10);
//}//cal������ӡ������ÿһλ
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//�ݹ�-�����Լ������Լ�
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
//}//ģ��ʵ��һ��strlen����
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
//}//��Ч�ؼ���׳�
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
//}//���ٸ�Ч�ؼ���׳�
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
//		thr++;//ͳ�Ƶ�3��쳲������������˼���
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 2) + Fib(n - 1);
//}//��Ч�ؼ���쳲�������
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = Fib(n);
//	printf("%d\n", num);
//	printf("��3��쳲�������������%d��\n", thr);
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
//}//���ٸ�Ч�ؼ���쳲�������
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
//		if (i / 10 == 9)//������else if����Ȼ99ֻ����һ�Σ��ʹ���
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}//��1��100���������г��ֶ��ٸ�����9

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int sig = 1;//���ڸı�ÿ����ǰ�ķ���
//	for (i = 1; i <= 100; i++)
//	{
//		sum += sig * 1.0 / i;
//		sig = -sig;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}//����1/1-1/2+1/3-......+1/99-1/100��ֵ

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
//	printf("ʮ�������У�������:%d\n", max);
//	return 0;
//}//��10�������е����ֵ

//int main()
//{
//	int i = 1;//����
//	for (i=1;i<=9;i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",j ,i ,j * i);//%-2d��ʾ������ӡ2λ���������ÿո����
//		}
//		printf("\n");
//	}
//	return 0;
//}//����Ļ�ϴ�ӡ9*9�˷��ھ���



