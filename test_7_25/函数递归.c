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
	//����һ���޷������Σ���˳���ӡ����ÿһλ
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);

	return 0;
}