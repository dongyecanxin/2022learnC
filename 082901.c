#include<stdio.h>

struct Book
{
	char name[20];
	short price;
};

int main()
{
	struct Book b1 = { "C语言程序设计",55 };
	struct Book* pb = &b1;
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);

	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//printf("书名:%s\n", b1.name);
	//printf("价格:%d元\n", b1.price);
	//b1.price=15;
	//printf("修改后的价格:%d元\n", b1.price);
	return 0;
}

//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%d\n", sizeof(pd));
//	//int a = 10;
//	//int* p = &a;
//	//printf("%p\n", p);
//	//*p = 20;
//	//printf("a = %d\n", a);
//	return 0;
//}