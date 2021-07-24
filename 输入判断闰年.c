#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>

int is_leap_year(int n)
{
	return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
}

int main()
{
	int year = 0;
	printf("请输入年份：");
	scanf("%d", &year);
	if (is_leap_year(year) == 1)
		printf("是闰年！");
	else
		printf("不是闰年！");
	return 0;
}