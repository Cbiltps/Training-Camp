#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

int Big(int x, int y)
{
	if (x > y)
	{
		printf("�ϴ�ֵΪ��%d\n", x);
		return x;
	}
	else
	{
		printf("�ϴ�ֵΪ��%d\n", y);
		return y;
	}
}

int main()
{
	int x = 0;
	int y = 0;
	scanf("%d%d", &x, &y);
	Big(x,y);
}