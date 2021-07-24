#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

int la(int m, int n)
{
	int t, i;
	if (m < n)
	{
		t = m;
		m = n;
		n = t;
	}
	while (n != 0)
	{
		i = m % n;
		m = n;
		n = i;
	}
	return(m);
}

int main()
{
	int a = 0;
	int b = 0;
	int l = 0;
	scanf("%d %d", &a, &b);
	l = la(a, b);
	printf("最大公约数是：%d\n", l);
}