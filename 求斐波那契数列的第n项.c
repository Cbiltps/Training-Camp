#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int i, n;
	int f[100];
	f[0] = f[1] = 1;
	while ((scanf("%d", &n) != EOF))
	{
		for (i = 2; i <= n; i++)
		{
			f[i] = f[i - 2] + f[i - 1];
		}
		printf("%d\n", f[n - 1]);
	}
	return 0;
}