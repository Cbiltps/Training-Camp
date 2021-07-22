#include <stdio.h>

int is_leap_year(int n)
{
	return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
	//if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))//判断y是否为闰年
	//{
	//	return 1;//是闰年，返回1
	//}
	//else
	//{
	//	return 0;//不是闰年，返回0
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