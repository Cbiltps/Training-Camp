#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int i, n, m = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &n);
	for (i = n; i > 0; i--)
	{
		m += i;//m=m+i
	}
	printf("%d的累加和为%d",n,m);
	return 0;
}