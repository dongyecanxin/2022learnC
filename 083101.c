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
//}//ctrl+z getchar�Ͷ�ȡ����

//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//	printf("��ȷ��(Y/N):");
//	//��������
//	//getchar();//����'\n'
//	//
//	//���������еĶ������
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n');
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
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
//	int i = 2;//��ʼ��
//	while (i <= 20)//�жϲ���
//	{
//		printf("%d ", i);
//		i+=2;//��������
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
//}//����һ�����֣�����׳�
 
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
//}//��1!+...+10!������4037913
 
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
//}//����һ�����֣�����׳�

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int d = 0;
//		for (b = 1; b <= 10; b++)
//		{
//			c = 1;//����n�Ľ׳�֮ǰ����c��ʼ��Ϊ1
//				for(a=1;a<=b;a++)
//				{
//					c *= a;
//				}
//			d += c;
//		}
//	printf("%d\n", d);
//	return 0;
//}//��1!+...+10!������4037913
	
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
//}//��������1!+...+10!������4037913


