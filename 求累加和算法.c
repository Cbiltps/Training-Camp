#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int i, n, m = 0;
	printf("������һ��������\n");
	scanf("%d", &n);
	for (i = n; i > 0; i--)
	{
		m += i;//m=m+i
	}
	printf("%d���ۼӺ�Ϊ%d",n,m);
	return 0;
}