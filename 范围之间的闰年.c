#include <stdio.h>

int judge_year(int n)
{
	//判断year是否为闰年：
	//1.能被4整除并且不被100整除是闰年
	//2.能被400整除是闰年
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int year;
	for (year = 1000; year <= 2000; year++)
	{
		if (judge_year(year) == 1)
		{
			printf("%d ", year);
		}
	}
	return 0;
}