#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int fac(int n)
{
	int i = 1;
	int sum = 1;//��ʼ��
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	return sum;
}
int main()
{
	int n = 0;
	printf("��������Ҫ�������\n");
	scanf("%d", &n);
	int ret = fac(n);//��fac�����������ս������ret
	printf("%d�Ľ׳���%d ", n, ret);
	return 0;
}