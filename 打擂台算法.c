#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#define N 5
int main()
{
	int i, a[N], max;
	printf("请输入%d个数", N);
	for (i = 0; i < N; i++)//循环输入10个数组元素
		scanf("%d", &a[i]);
	max = a[0];
	for (i = 0; i < N; i++)//N个元素进行打擂台比较大小
	{
		if (a[i] >= max)//按顺序来比较max
			max = a[i];
	}
	printf("最大数为：%d\n", max);
	return 0;
}