#include <stdio.h>
//#include <math.h>

//int is_prime(int n)
//{
//	//试除法
//	//2到n-1
//	//2到sqrt(n)
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;//不是素数
//	}
//	return 1;//是素数
//}

int is_prime(int k)
{
	int j = 0;
	for (j = 2; j < k; j++)
	{
		if (k % j == 0)//如果不为素数返回0
			return 0;
	}
	return 1;//反之则返回1
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)//100到200之间的素数
	{
		if (is_prime(i) == 1)//判断i是否为素数
		{
			printf("%d ", i);
		}
	}
	return 0;
}