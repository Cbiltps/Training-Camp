#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

//�������������˵�����õݹ鲻̫����
//���Կ����õ�      ������ѭ����   ���������

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