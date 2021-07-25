#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

//int Fac(int x)
//{
//	int i = 0;
//	int z = 1;
//	for (i = 1; i <= x; i++)
//	{
//		z *= i;
//	}
//	return z;
//}
//

int Fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}
 
 
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}