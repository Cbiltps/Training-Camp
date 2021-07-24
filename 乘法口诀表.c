#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int n = 0;
//		for (n = 1; n <= i; n++)
//		{
//			printf("%d*%d=%2d ", i, n, i * n);
//		}
//		printf("\n");
//	}
// return 0;
//}

int form()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	form();
	return 0;
}
