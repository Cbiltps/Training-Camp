#include<stdio.h>

int big(int a,int b)
{
	int* p1, * p2;//定义两个指针变量
	p1 = &a;
	p2 = &b;
	if (*p1 > *p2)
		printf("%d %d\n", a, b);
	else
		printf("%d %d\n", b, a);
}

int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	big(a, b);
	return 0;
}