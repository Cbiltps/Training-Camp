#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

void change(int *x, int *y)
{
	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前：a=%d b=%d\n", a, b);
	change(&a,&b);
	printf("交换后：a=%d b=%d\n", a, b);
	return 0;
}