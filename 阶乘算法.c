#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int fac(int n)
{
	int i = 1;
	int sum = 1;//初始化
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	return sum;
}
int main()
{
	int n = 0;
	printf("请输入所要求的数：\n");
	scanf("%d", &n);
	int ret = fac(n);//用fac函数并把最终结果赋给ret
	printf("%d的阶乘是%d ", n, ret);
	return 0;
}