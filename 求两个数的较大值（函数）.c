#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

int Big(int x, int y)
{
	if (x > y)
	{
		printf("较大值为：%d\n", x);
		return x;
	}
	else
	{
		printf("较大值为：%d\n", y);
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