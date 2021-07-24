#include <stdio.h>

int judge_year(int n)
{
	//�ж�year�Ƿ�Ϊ���꣺
	//1.�ܱ�4�������Ҳ���100����������
	//2.�ܱ�400����������
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