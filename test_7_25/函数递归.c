#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	//创建一个无符号整形，按顺序打印它的每一位
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);

	return 0;
}