#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>

int main()
{
	int i = 0;
	int n = 1;
	int z = 0;
	for (i = 1; i <= 10; i++)
	{
		n = n * i;
		z = z + n;
	}
	printf("%d\n", z);
}

//以下代码是，输入n,求n的阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int z = 1;
//	for (i = 1; i <= n; i++)
//	{
//		z = z * i;
//	}
//	printf("%d\n", z);
//	return 0;
//}