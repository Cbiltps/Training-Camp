#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>

int is_leap_year(int n)
{
	return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
}

int main()
{
	int year = 0;
	printf("��������ݣ�");
	scanf("%d", &year);
	if (is_leap_year(year) == 1)
		printf("�����꣡");
	else
		printf("�������꣡");
	return 0;
}