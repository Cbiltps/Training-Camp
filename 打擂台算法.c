#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#define N 5
int main()
{
	int i, a[N], max;
	printf("������%d����", N);
	for (i = 0; i < N; i++)//ѭ������10������Ԫ��
		scanf("%d", &a[i]);
	max = a[0];
	for (i = 0; i < N; i++)//N��Ԫ�ؽ��д���̨�Ƚϴ�С
	{
		if (a[i] >= max)//��˳�����Ƚ�max
			max = a[i];
	}
	printf("�����Ϊ��%d\n", max);
	return 0;
}