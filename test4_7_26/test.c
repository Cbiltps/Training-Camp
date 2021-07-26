#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

//对于这个函数来说，利用递归不太合理
//所以可以用到      迭代（循环）   不考虑溢出

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}

	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d", ret);
	return 0;
}