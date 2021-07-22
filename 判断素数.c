#include <stdio.h>

int is_leap_year(int n)
{
	return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
	//if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))//�ж�y�Ƿ�Ϊ����
	//{
	//	return 1;//�����꣬����1
	//}
	//else
	//{
	//	return 0;//�������꣬����0
	//}
}

int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leap_year(y) == 1)
		{
			printf("%d ", y);
		}
	}
	return 0;
}