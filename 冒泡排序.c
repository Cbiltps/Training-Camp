#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#define N 5
int main()
{
	int i, j, a[N];
	printf("������%d�����֣�\n", N);//��ʼ��������a
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < (N - 1) - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("\n");
	for (i = 0; i < N; i++)//��ʼ�������a
	{
		printf("%d", a[i]);
	}
	//getcher();
	return 0;
}