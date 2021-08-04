#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;

	for (i = 1; i <= 99999; i++)
	{
		int tmp = i;
		int count = 0;
		int sum = 0;

		while (tmp)
		{
			tmp /= 10;
			count++;
		}
		tmp = i;

		while (tmp)
		{
			sum += pow((tmp % 10), count);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d是一个水仙花数\n", i);
		}
	}

	return 0;
}